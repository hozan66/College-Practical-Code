#!/bin/bash

# echo "List of files and folders: "
# ls

# echo "Print working directory: "
# pwd

# echo "Creating a directory on the Destop"
# echo "Enter directory name: "
# read NAME
# mkdir ../$NAME
# echo "Directory $NAME has been created on the Destop! "
# echo

# arr[*] or arr[@] are the same except loops
# arr[*] will print elements horizonally
# arr[@] will print elements vertically
# echo "Array"
arr=(11 22 33 44 55 66)
# echo "this is Third Element: ${arr[2]}"

echo "Print all Elements of Array: ${arr[*]}"
echo "Removing Third Element: ${arr[2]}"
unset arr[2]
echo "Print all Elements of Array: ${arr[@]}"
echo

arr[2]=99

echo "Show indexes of Array: ${!arr[@]}"
echo "Show length of Array: ${#arr[@]}"
echo "Print all Elements of Array: ${arr[@]}"

echo
echo "Adding Elements in the end of Array: "
arr+=(80 90)
echo "Print all Elements of Array: ${arr[@]}"
echo "Show indexes of Array: ${!arr[@]}"
echo "Show length of Array: ${#arr[@]}"
