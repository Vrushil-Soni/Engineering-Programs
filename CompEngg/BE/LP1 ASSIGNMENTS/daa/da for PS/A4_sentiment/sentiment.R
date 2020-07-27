install.packages('sentimentr')
library('sentimentr')

data <- read.csv(file="Twitter_sentiment_self_drive_DFE.csv",header=TRUE)

tweets <- data[,ncol(data)]
tweets

for(i in tweets){
  x <- sentiment(i)
  print(x)
}

#output

#	> install.packages('sentimentr')
#	Installing package into ‘/home/vrushil/R/x86_64-pc-linux-gnu-library/3.4’
#	(as ‘lib’ is unspecified)
#	trying URL 'https://cloud.r-project.org/src/contrib/sentimentr_2.7.1.tar.gz'
#	Content type 'application/x-gzip' length 3824821 bytes (3.6 MB)
#	==================================================
#	downloaded 3.6 MB
	
#	* installing *source* package ‘sentimentr’ ...
#	** package ‘sentimentr’ successfully unpacked and MD5 sums checked
#	** R
#	** data
#	*** moving datasets to lazyload DB
#	** inst
#	** preparing package for lazy loading
#	** help
#	*** installing help indices
#	** building package indices
#	** testing if installed package can be loaded
#	* DONE (sentimentr)
	
#	The downloaded source packages are in
#		‘/tmp/RtmpaTQfMh/downloaded_packages’
#	> library('sentimentr')
#	> data <- read.csv(file="Twitter_sentiment_self_drive_DFE.csv",header=TRUE)
#	> tweets <- data[,ncol(data)]
#	> tweets
#	#all tweets are shown...
#	 [992] Google Driverless Car. Go to a theme park, find a ride that bores you to tears whilst your 4 yr old child smiles ear to ear. 		Basically		that.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
#	 [993] @USATODAY @googlegmail Just saw this on @GMA #cars #yikes #driverless                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
#	 [994] @ryanchris I drive hundreds of miles a week. Bring on the driverless car. Can̢\x89\xe2\u0089\xe3\xa2t wait to stop driving.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
#	 [995] When the time came, I knew it'd look like an egg - @Dezeen: Google unveils "driverless" car: http://t.co/1n5cLVfEsj http://t.co/JJ8I4WoCgp                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
#	 [996] @edwardboches Nope, because Google invested $258m in Uber. They will *have* the driverless cars ;) http://t.co/BHmre3MIl9                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
#	 [997] Google's driverless cars - no brakes or steering wheel - coming to streets this year. http://t.co/JxPfKCzOxc (Google) http://t.co/Uqx9xELqRG                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
#	 [998] @ForbesTech Why do they take great concepts for cars (driverless &amp; electric) and make them so intentionally unappealing..                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#	 [999] @uplift17 driverless cars are supposed to be taxis, though. Not personal vehicles.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
#	[1000] I can̢\x89\xe2\u0089\xe3\xa2t wait until Google̢\x89\xe2\u0089\xe3\xa2s driverless cars take me on a less efficient route to my 		destination so as to pass by billboards deemed relevant.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
#	 [ reached getOption("max.print") -- omitted 6156 entries ]
#	7146 Levels: @0ne_AM How Google got states to legalize driverless cars http://t.co/LxK1srXCDm (from @AP) ...
#	> for(i in tweets){
#	+   x <- sentiment(i)
#	+   print(x)
#	+ }
#	   element_id sentence_id word_count sentiment
#	1:          1           1         16      0.15
#	   element_id sentence_id word_count  sentiment
#	1:          1           1          1  0.6000000
#	2:          1           2         15 -0.3485685
#	   element_id sentence_id word_count sentiment
#	1:          1           1         22 0.1066004
#	   element_id sentence_id word_count sentiment
#	1:          1           1         17 0.1697749
#	   element_id sentence_id word_count sentiment
#	1:          1           1          8         0
#	2:          1           2          6         0
#	   element_id sentence_id word_count sentiment
#	1:          1           1          9         0
#	   element_id sentence_id word_count sentiment
#	1:          1           1          8 0.3535534
#	   element_id sentence_id word_count sentiment
#	1:          1           1          9 0.5166667
#	2:          1           2          6 0.0000000
#	   element_id sentence_id word_count  sentiment
#	1:          1           1          9 -0.1333333
#	   element_id sentence_id word_count  sentiment
#	1:          1           1          7  0.0000000
#	2:          1           2         13 -0.2773501
#	   element_id sentence_id word_count  sentiment
#	1:          1           1         10 0.07905694
#	   element_id sentence_id word_count sentiment
#	1:          1           1         16         0
#	2:          1           2          3         0
#	   element_id sentence_id word_count sentiment
#	1:          1           1         24 0.1224745
#	>
