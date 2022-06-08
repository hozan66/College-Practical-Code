#!/bin/bash

echo "Greet Based On Time of the System."

#echo "Enter the time: "
# read h

h=$(date +%H) #hour
# m=$(date +%M) #minute
# s=$(date +%S) #sconds


if (( h<=12 && h>=6 ))
	then
		echo "Good Morning"
	elif (( h<=16 && h>=12 ))
	then
		echo "Good Afternoon"
	elif (( h<=20 && h>=16 ))
	then
		echo "Good Evening"
	else
		echo "Good Night"
fi

echo "========================================="
echo "I/O Redirection."

# redirect the output of ls command to a file "listoffiles.txt" override
ls > listoffiles.txt

# redirect the output of ls to a file (listoffiles.txt) append
ls >> listoffiles.txt

# redirect the output of myfile to a command (listoffiles.txt)
wc -l < listoffiles.txt