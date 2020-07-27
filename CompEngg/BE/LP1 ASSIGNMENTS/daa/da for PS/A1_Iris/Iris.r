# read the dataset
df = read.csv("iris.csv")

#see the summary of dataset
print("SUMMARY AND STRUCTURE")
summary(df)
str(df)  #structure with class

print("MINIMUM VALUE")
print(sapply(df, function(x) min(as.numeric(x))))
print("MAXIMUM VALUE")
print(sapply(df, function(x) max(as.numeric(x))))
print("AVERAGE VALUE")
print(sapply(df, function(x) mean(as.numeric(x))))
print("RANGE OF VALUES")
print(sapply(df, function(x) range(as.numeric(x))))
print("STANDARD DEVIATIONS")
print(sapply(df, function(x) sd(as.numeric(x))))
print("VARIANCE")
print(sapply(df, function(x) var(as.numeric(x))))

print("PERCENTILES")
num = c(1,2,3,4)
for (n in num) {
  cat("Column", n , "\n")
  print(quantile(df[,n], probs = c(0, 0.25, .5,0.75, 1)))
#we can aslo use dataset$column to do operation on specific coloum
# ex= df$petallength
}

for (n in num) {
  hist(df[,n], main = "Histogram")
  Sys.sleep(20)
}

boxplot(df[,1:4], main = "Boxplot of Iris")



#output


#	 read the dataset
#	> df = read.csv("iris.csv")
#	> #see the summary of dataset
#	> print("SUMMARY AND STRUCTURE")
#	[1] "SUMMARY AND STRUCTURE"
#	> summary(df)
#	  sepal_length    sepal_width     petal_length    petal_width          species  
#	 Min.   :4.300   Min.   :2.000   Min.   :1.000   Min.   :0.100   setosa    :50  
#	 1st Qu.:5.100   1st Qu.:2.800   1st Qu.:1.600   1st Qu.:0.300   versicolor:50  
#	 Median :5.800   Median :3.000   Median :4.350   Median :1.300   virginica :50  
#	 Mean   :5.843   Mean   :3.054   Mean   :3.759   Mean   :1.199                  
#	 3rd Qu.:6.400   3rd Qu.:3.300   3rd Qu.:5.100   3rd Qu.:1.800                  
#	 Max.   :7.900   Max.   :4.400   Max.   :6.900   Max.   :2.500                  
#	> str(df)  #structure with class
#	'data.frame':	150 obs. of  5 variables:
#	 $ sepal_length: num  5.1 4.9 4.7 4.6 5 5.4 4.6 5 4.4 4.9 ...
#	 $ sepal_width : num  3.5 3 3.2 3.1 3.6 3.9 3.4 3.4 2.9 3.1 ...
#	 $ petal_length: num  1.4 1.4 1.3 1.5 1.4 1.7 1.4 1.5 1.4 1.5 ...
#	 $ petal_width : num  0.2 0.2 0.2 0.2 0.2 0.4 0.3 0.2 0.2 0.1 ...
#	 $ species     : Factor w/ 3 levels "setosa","versicolor",..: 1 1 1 1 1 1 1 1 1 1 ...
#	> print("MINIMUM VALUE")
#	[1] "MINIMUM VALUE"
#	> print(sapply(df, function(x) min(as.numeric(x))))
#	sepal_length  sepal_width petal_length  petal_width      species 
#	         4.3          2.0          1.0          0.1          1.0 
#	> print("MAXIMUM VALUE")
#	[1] "MAXIMUM VALUE"
#	> print(sapply(df, function(x) max(as.numeric(x))))
#	sepal_length  sepal_width petal_length  petal_width      species 
#	         7.9          4.4          6.9          2.5          3.0 
#	> print("AVERAGE VALUE")
#	[1] "AVERAGE VALUE"
#	> print(sapply(df, function(x) mean(as.numeric(x))))
#	sepal_length  sepal_width petal_length  petal_width      species 
#	    5.843333     3.054000     3.758667     1.198667     2.000000 
#	> print("RANGE OF VALUES")
#	[1] "RANGE OF VALUES"
#	> print(sapply(df, function(x) range(as.numeric(x))))
#	     sepal_length sepal_width petal_length petal_width species
#	[1,]          4.3         2.0          1.0         0.1       1
#	[2,]          7.9         4.4          6.9         2.5       3
#	> print("STANDARD DEVIATIONS")
#	[1] "STANDARD DEVIATIONS"
#	> print(sapply(df, function(x) sd(as.numeric(x))))
#	sepal_length  sepal_width petal_length  petal_width      species 
#	   0.8280661    0.4335943    1.7644204    0.7631607    0.8192319 
#	> print("VARIANCE")
#	[1] "VARIANCE"
#	> print(sapply(df, function(x) var(as.numeric(x))))
#	sepal_length  sepal_width petal_length  petal_width      species 
#	   0.6856935    0.1880040    3.1131794    0.5824143    0.6711409 
#	> print("PERCENTILES")
#	[1] "PERCENTILES"
#	> num = c(1,2,3,4)
#	> for (n in num) {
#	+   cat("Column", n , "\n")
#	+   print(quantile(df[,n], probs = c(0, 0.25, .5,0.75, 1)))
#	+ #we can aslo use dataset$column to do operation on specific coloum
#	+ # ex= df$petallength
#	+ }
#	Column 1 
#	  0%  25%  50%  75% 100% 
#	 4.3  5.1  5.8  6.4  7.9 
#	Column 2 
#	  0%  25%  50%  75% 100% 
#	 2.0  2.8  3.0  3.3  4.4 
#	Column 3 
#	  0%  25%  50%  75% 100% 
#	1.00 1.60 4.35 5.10 6.90 
#	Column 4 
#	  0%  25%  50%  75% 100% 
#	 0.1  0.3  1.3  1.8  2.5 
#	> for (n in num) {
#	+   hist(df[,n], main = "Histogram")
#	+   Sys.sleep(20)
#	+ }
#	> boxplot(df[,1:4], main = "Boxplot of Iris")
#	> 
