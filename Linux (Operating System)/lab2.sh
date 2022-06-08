#!/bin/bash

# #Read three numbers and find the sum and average??
# # -n for removing endline
# echo -n "Enter The First Number: "
# read num1
# echo -n "Enter The Second Number: "
# read num2
# echo -n "Enter The Third Number: "
# read num3

# # When we have an operation we must use (expr) keyword 
# # watch out the spaces
# echo
# s=`expr $num1 + $num2 + $num3`
# av=`expr $s / 3`
# echo "sum= $s"
# echo "average= $av"
# echo "==============================="

# a=0
# while [ $a -lt 10 ]
# do
# echo $a
# a=`expr $a + 1`
# done

# echo "==============================="

# input_string="hello"
# while [ "$input_string" != "bye" ]
# do
# echo "Please type (bye) to quit"
# read input_string
# echo "You Typed: $input_string"
# echo
# done
# echo "==============================="


# for i in 1 2 3 4 5
# do
# echo "Welcome $i times"
# done

# echo "==============================="

# for i in {1..5}
# do
# echo "Welcome $i times"
# done

# echo "==============================="

# for i in {0..10..2}
# do
# echo "Welcome $i times"
# done

# echo "==============================="
# for ((i=1;i<=5;i++))
# do
# echo "Welcome $i times"
# done
# echo "==============================="

# str1=('hozan' 'ageed' 'farho')

# for n in ${str1[@]} #@ inside loop (elements will be printed vertically)
# do
# echo "Name: $n"
# done
# echo "==============================="

# str2=('hozan' 'ageed' 'farho')

# for n in ${str2[*]} #* inside loop (elements will be printed horizontally)
# do
# echo "Name: $n"
# echo "${str2[*]}"
# done
# echo "===============================" 

# name="Hozan Ageed Farho"
# for n in $name
# do
# echo $n
# done

# echo -n $name  # it will not print new line here
# echo all done
# echo "==============================="

echo -n "Enter numbers of array of siz 3: "

# -a stands for array
read -a arr

echo ${arr[@]}
echo "==============================="

# -e it will enable backslash
echo -e "text1\ntext2\ttext3"