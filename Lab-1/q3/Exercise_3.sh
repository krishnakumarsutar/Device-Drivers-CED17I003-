#!/bin/bash
FILE=./analysis/download.out
TIMEFILE=./analysis/timefile.txt
URL=https://www.storyshaala.com
RESULT=./analysis/result.txt

startTime=$(date)
echo "----------------start------------" >> $FILE
echo "" >> $FILE

time(curl --connect-timeout 100 $URL) >> $FILE 2>> $TIMEFILE
echo "" >> $FILE
endTime=$(date)
echo "startTime: $startTime" >> $FILE >> $TIMEFILE
echo "endTime: $endTime" >> $FILE >> $TIMEFILE
echo "---------------end-----------" >> $FILE
echo "" >> $FILE >> $TIMEFILE

grep 'real\|startTime' ./analysis/timefile.txt > $RESULT
