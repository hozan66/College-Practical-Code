#!/bin/bash
# Test
echo "Hello MY Test"
echo "This is list of Folders and Files:" *

var="Hozan"
echo $var

# Everything is shell script consider as string

num=10
num=$(expr $num + 1)
echo "Number: ${num}"
