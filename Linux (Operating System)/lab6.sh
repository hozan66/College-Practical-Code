#!/bin/bash

a=0
while [ "$a" -lt 10 ] # This is loop1
do
	b="$a"
	while [ "$b" -ge 0 ] # This is loop2
	do
		echo -n "$b "
		b=`expr $b - 1`
	done
	a=`expr $a + 1`
	echo $a
done
echo "========================"

for ((i=1; i<=5; i++))
do
	for ((j=1; j<=5; j++))
	do
		echo -n "$i "
	done
	echo # print a new line
done
echo "========================"

# (seq) stand for sequence
# print numbers from 5 to 10
seq 5 10
echo "========================"

for i in 1 2 3 4 5
do
	for j in $(seq 1 $i)
	do
		echo -n "*"
	done
	echo # print a new line
done
echo "========================"

# break
a=0
while [ $a -lt 10 ]
do
	echo $a
	if [ $a -eq 5 ]
	then
		break
	fi
	a=`expr $a + 1`
done
echo "========================"

# continue
# Remember everything in shell script is considered as string
nums="1 2 3 4 5 6 7"
for num in $nums
do
	Q=`expr $num % 2`
	if [ $Q -eq 0 ]
	then
		echo "Number is an even number!!"
		continue
		echo $num
	fi
	echo "Found odd number"
	echo $num
done
echo "========================"

rows=5
for ((i=1; i<=rows; i++))
do
	# print spaces
	for ((j=1; j<=rows-i; j++))
	do
		echo -n " "
	done
    
    # print stars in odd numbers
	for ((j=1; j<=2*i-1; j++))
	do
		echo -n "*"
	done
	echo # print a new line
done


