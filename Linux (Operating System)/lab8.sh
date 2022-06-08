#!/bin/bash

# Usage: wc [OPTION]... [FILE]...
#   or:  wc [OPTION]... --files0-from=F
# Print newline, word, and byte counts for each FILE, and a total line if
# more than one FILE is specified.  A word is a non-zero-length sequence of
# characters delimited by white space.

# -c, --bytes            print the byte counts
# -m, --chars            print the character counts
# -l, --lines            print the newline counts
# -w, --words            print the word counts

wc student.txt

# output: 

# 2  9 37 student.txt

# wc student.txt 
#  2  9 37 student.txt

# wc -c student.txt 
# 56 student.txt

# wc -m student.txt 
# 47 student.txt

# wc -l student.txt 
# 3 student.txt
 
# ls | wc -l # return number of files and folders
ls | wc -w # return number of files and folders

wc -w student.txt teacher.txt
# Output:
#  9 student.txt
#  4 teacher.txt
# 13 total
echo "========================"

wc -w < student.txt #Display only one column
#or
wc -w student.txt | cut -c1,2 #Display only one column
echo "========================"

grep "it" student.txt
echo "========================"
grep -w "it" student.txt #Default
echo "========================"
grep -n "it" student.txt
echo "========================"
grep -v "it" student.txt
echo "========================"
grep -i "it" student.txt
echo "========================"
grep -x "it" student.txt
echo "========================"
grep -c "it" student.txt
echo "========================"

sort student.txt
echo "........................"
sort -f student.txt #Default Sort upper- and lowercase together.
echo "........................"
sort -n student.txt #Sort numerically ,ignore blanks and tabs.
echo "........................"
sort -r student.txt #Reverse the order of sort.
echo "........................"
sort -nr  student.txt
echo "........................"
ls  | sort -r
echo "........................"
cat student.txt | sort
echo "........................"
cat student.txt | wc -l
echo "........................"
cat student.txt |  uniq
echo "........................"
cat student.txt | sort

echo "========================"
ls -l | more
echo "========================"
# cat ls -l | less

