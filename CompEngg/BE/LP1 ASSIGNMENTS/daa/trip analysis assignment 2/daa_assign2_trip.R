library(e1071)
library(rpart)
library(caTools)
mydate<-read.csv(file="/root/capitalbikeshare-tripdata.csv", header=TRUE,sep=",")
View(mydata)
#consider
subset_mydata<-mydata[,c(1,4,6,9)]
# %split
temp_filed<-sample.split(subset_mydata,SplitRatio=0.9)
#90% data will be trained
train<-subset(subset_mydata,temp_field=TRUE)
#10%data will be trained data
test<-subset(subset_mydata,temp_field=FALSE)
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
output<-cbind(test,pred)
View(Output)
library(e1071)