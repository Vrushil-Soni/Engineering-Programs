#Prog 3 : Trip advisory dataset

library(e1071)
library(rpart)
library(caTools)
mydata<-read.csv(file="capitalbikeshare.csv",header=TRUE, sep=",")
View(mydata)
#consider
subset_mydata<-mydata[,c(1,4,6,9)]

# %split
temp_field<-sample.split(subset_mydata,SplitRatio=0.9)

#90% data will be trained data
train<-subset(subset_mydata, temp_field=TRUE)
#10% data will be test data
test<-subset(subset_mydata, temp_field=FALSE)

#Display train and test data
head(train)
head(test)

summary(train)
summary(test)

fit<-rpart(train$Member.type~.,data=train, method="class")
#To display
plot(fit)
text(fit)

#test data excluding the last column
pred<-predict(fit,newdata=test[-4],type=("class"))

#meanof true prediction
mean(pred==test$Member.type)

#display the output of the test data
output<-cbind(test, pred)
View(output)



#output

#	> library(e1071)
#	> library(rpart)
#	> library(caTools)
#	> mydata<-read.csv(file="capitalbikeshare.csv",header=TRUE, sep=",")
#	> View(mydata)
#	> #consider
#	> subset_mydata<-mydata[,c(1,4,6,9)]
#	> # %split
#	> temp_field<-sample.split(subset_mydata,SplitRatio=0.9)
#	> #90% data will be trained data
#	> train<-subset(subset_mydata, temp_field=TRUE)
#	> #10% data will be test data
#	> test<-subset(subset_mydata, temp_field=FALSE)
#	> #Display train and test data
#	> head(train)
#	  Duration Start.station.number End.station.number Member.type
#	1     1012                31208              31108      Member
#	2       61                31209              31209      Member
#	3     2690                31600              31100      Member
#	4     1406                31600              31602      Member
#	5     1413                31100              31201      Member
#	6      982                31109              31200      Member
#	> head(test)
#	  Duration Start.station.number End.station.number Member.type
#	1     1012                31208              31108      Member
#	2       61                31209              31209      Member
#	3     2690                31600              31100      Member
#	4     1406                31600              31602      Member
#	5     1413                31100              31201      Member
#	6      982                31109              31200      Member
#	> summary(train)
#	    Duration     Start.station.number End.station.number  Member.type   
#	 Min.   :   60   Min.   :31000        Min.   :31000      Casual :24001  
#	 1st Qu.:  403   1st Qu.:31110        1st Qu.:31111      Member :91586  
#	 Median :  665   Median :31213        Median :31214      Unknown:   10  
#	 Mean   : 1255   Mean   :31266        Mean   :31268                     
#	 3rd Qu.: 1120   3rd Qu.:31301        3rd Qu.:31238                     
#	 Max.   :85644   Max.   :31805        Max.   :31805                     
#	> summary(test)
#	    Duration     Start.station.number End.station.number  Member.type   
#	 Min.   :   60   Min.   :31000        Min.   :31000      Casual :24001  
#	 1st Qu.:  403   1st Qu.:31110        1st Qu.:31111      Member :91586  
#	 Median :  665   Median :31213        Median :31214      Unknown:   10  
#	 Mean   : 1255   Mean   :31266        Mean   :31268                     
#	 3rd Qu.: 1120   3rd Qu.:31301        3rd Qu.:31238                     
#	 Max.   :85644   Max.   :31805        Max.   :31805                     
#	> fit<-rpart(train$Member.type~.,data=train, method="class")
#	> #To display
#	> plot(fit)
#	> text(fit)
#	> #test data excluding the last column
#	> pred<-predict(fit,newdata=test[-4],type=("class"))
#	> #meanof true prediction
#	> mean(pred==test$Member.type)
#	[1] 0.8589583
#	> #display the output of the test data
#	> output<-cbind(test, pred)
#	> View(output)
#	> 


