# Importing Libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Importing Dataset
data_set = pd.read_csv('PimaIndiansDiabetes.csv')
X = data_set.iloc[:, :-1]   # Independent Variables separated as X
y = data_set.iloc[:, -1]    # Dependent Variables into y
print("IV".center(40, "_"), '\n', X.head())
print("DV".center(40, "_"), '\n', y.head())

# Check for Missing Values
print(X.isnull().any())
print(y.isnull().any())

# Summary
print(X.info())
# Turning into Raw / NP format
X = X.values
y = y.values

# Noted the High Variance between All fields
# Scaling required

# 1. Splitting X,y into Train & Test
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25, random_state=0)


# 2. Scaling
from sklearn.preprocessing import StandardScaler
scaler_X = StandardScaler()
X_train = scaler_X.fit_transform(X_train)
X_test = scaler_X.transform(X_test)

# Machine: Classifier | NB: Gaussian Naive Bayes
from sklearn.naive_bayes import GaussianNB
classifier = GaussianNB()
classifier.fit(X_train, y_train)

# Predictions
y_pred = classifier.predict(X_test)

# Validating Predictions using Confusion Matrix
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)
print(cm)

from sklearn.metrics import precision_recall_fscore_support
prf = precision_recall_fscore_support(y_test, y_pred)
print('\t\t\t\t ZERO\t\t\tONE')
print('Precision\t:', prf[0]*100)
print('Recall\t\t:', prf[1]*100)
print('F1 Measure\t:', prf[2]*100)
print('Support\t\t:', prf[3])
