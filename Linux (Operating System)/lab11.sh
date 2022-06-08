#!/bin/bash

second(){
	echo "Enter Your Name: "
	read name
	echo "Hi $name, Good day"
}
second
echo "========================"

Addition(){
	# echo "Enter Value of a: "
	# read a
	# echo "Enter Value of b: "
	# read b
	# echo "Enter Value of c: "
	# read c
	num1=$1
	num2=$2
	num3=$3
	result=$((num1+num2+num3))
	return $result
	# return $((num1+num2))
}
Addition 3 4 7
echo "========================"

ans=$?
echo "$ans"
echo "$result"

firstfun() {
	echo "firstfun"

	secondfun() {
		echo "secondfun"
        
		thirdfun() {
		echo "thirdfun"

	}
	thirdfun
	}

	secondfun

}
firstfun
echo "========================"

var1='A'
var2='B'
my_function () {
	local var1='c'
	var2='D'
echo "inside funtion: $var1, var2:$var2"
}

echo "before executing function var: $var1, var2: $var2"
my_function
echo "after executing functin var1: $var1, var: $var2"
echo "========================"

CheckEven() 
{ 
	# if [ `expr $1 % 2` == 0 ]
	if (($1 % 2 == 0))
	then
	result=0
	else
	result=10
	fi
	return $result  
} 
CheckEven 5
echo "the number is $?"
echo "========================"

factorial(){
	n=$1
	fact=1 
	while [ $n -ne 1 ] 
		do 
		fact=` expr $fact \* $n` 
		n=` expr $n - 1 ` 
		done 
	echo "The factorial of $1= $fact" 
}
factorial 5
echo "========================"

fac(){
	n=$1
	f=1 
	while ((n >= 1)) 
		do 
		f=$((n*f)) 
		n=$((n-1)) 
		done 
	echo "The factorial of $1= $f" 
}
fac 5

