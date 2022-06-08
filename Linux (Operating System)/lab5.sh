#!/bin/bash

a=10
b=20
if [ $a != $b ]
	then
		echo "$a != $b : a is not equal to b"
	else
		echo "$a != $b : a is equal to b"
fi
echo "========================"

# OR (-o), AND (-a) 
if [ $a -lt 100 -a $b -gt 15 ]
	then 
		echo "$a -lt 100 -a $b -gt 15: return true"
	else

		echo "$a -lt 100 -a $b -gt 15: return false"
fi
echo "========================"

# -z if a string is empty
# -n if a string is not empty

str1=""
str2="hello"
if [ -z "$str1" ]
	then
		echo "str1 Is Empty"
	else
		echo "str1 is not Empty"
fi
if [ -n "$str1" ]
	then
		echo "str1 Is Empty"
	else
		echo "str1 is not Empty"
fi
echo "========================"

a="abc"
b="efg"
# (=) or (==) it's the same if we use it for comparing string 
if [ $a = $b ]
	then
		echo "$a != $b : a is equal to b"
	else
		echo "$a != $b : a is not equal to b"	
fi
if [ $a != $b ]
	then
		echo "$a != $b : a is not equal to b"
	else
		echo "$a != $b : a is equal to b"
fi
echo "========================"

a=""
if [ -z $a ]
	then 
		echo "$a : String operand length is zero"
	else

		echo "$a : String operand length is not zero"
fi
echo "========================"

# (./) means open the file
file="./test.sh"
if [ -r $file ]
	then
		echo "File has read access"
	else
		echo "File does not have read access"
fi
echo "========================"

if [ $file ]
	then 
		echo "File exists"
	else

		echo "File does not exists"
fi

if [ -f $file ]
	then 
		echo "File exists"
	else

		echo "File does not exists"
fi

if [ -x $file ]
	then
		echo "File is executable"
	else
		echo "File is not executable"
fi
echo "========================"


