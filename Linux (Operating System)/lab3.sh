#!/bin/bash

# # to see all .sh files in the current directory
# for f in $(ls *.sh)
# do
# echo $f
# done
# echo "================"

#show the content of file
#it will print all words (according to the spaces)

# # for i in $(cat lab1.sh)
# for i in `cat lab1.sh`
# do
# echo "Item: $i"
# done
# echo "================"

# a=10
# b=20
# if [ $a == $b ]
# 	then
# 		echo "a is equal b"
# else
# 		echo "a is not equal b"
# fi #final
# echo "================"

# arr=(11 22 33)
# echo "${arr[@]}"
# echo "================"

# echo -n "Enter a number: "
# read num
# if [ $num -ge 80 ]
# 	then
# 		echo "You Got: A"
# elif [ $num -ge 70 ]
# 	then
# 		echo "You Got: B"
# elif [ $num -ge 60 ]
# 	then
# 		echo "You Got: C"
# else
# 		echo "You Failed"
# fi
# echo "================"

day=("sat" 'sun' 'mon' 'tue' 'wed' 'thu' 'fri')
j=1

for i in ${day[@]}
do
	echo "Day $j : $i"
	j=`expr $j + 1`
done
echo "================"

# mark='A'
echo -n "Enter Your Mark Char: "
read mark
case $mark in
	'A') echo "Excelent"
	;;
	'B') echo "Very Good"
	;;
	'C') echo "Good"
	;;
	*) echo "Failed (Your mark is not good)"
	;;
esac