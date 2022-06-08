#!/bin/bash

echo "File Name: $0"
# n Variable: $n
echo "First Parapeter: $1"
echo "Second Parapeter: $2"
echo "Third Parapeter: $3"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number of Parapeters: $#"

echo "Question Mark (0=>Program Successful): $?"
echo "Dollar sign (Return The Address Of This Program): $$"
echo "========================"

for TOKEN in $*
do
	echo $TOKEN
done
echo "========================"

# Use quotation to see the difference
for TOKEN in "$*"
do
	echo $TOKEN
done
echo "========================"

for TOKEN in "$@"
do
	echo $TOKEN
done
echo "========================"
# backticks = ``
DATE=`date` # print or set the system date and time
echo "Date is: $DATE" 
USERS=`who | wc -l` # show who is logged on
echo "Logged in user are: $USERS"

# return the time that you take to work in this editor
# or
# Tell how long the system has been running
UP=`uptime`
echo "Uptime is: $UP"
echo "========================"