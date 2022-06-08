#!/bin/bash
#print 10 lines by default
echo "Head Command"
head num.txt 
echo "========================"

head -n 5 num.txt 
echo "========================"

# totalLines-num
head -n -5 num.txt 
echo "========================"

#print 10 lines by default from the end
echo "Tail Command"
tail num.txt
echo "========================"

tail -n 5 num.txt
echo "========================"

# totalLines-num
tail -n +5 num.txt
echo "========================"

echo "Print line 8 till line 16 ??"
head -n 16 num.txt | tail -n 9
echo "========================"

echo "Print line 8 till line 10 and line 14 till line 18 ??"
(head -n 10 num.txt | tail -n 3) && (head -n 18 num.txt | tail -n 5) 
echo "========================"

#Grab different sets of line from one file lines ( 8 – 10 ) and
#lines ( 14 – 18 ) and save them to another file??
echo "Save those lines into fnum.txt"
# (head -n 10 num.txt | tail -n 3) > fnum.txt; (head -n 18 num.txt | tail -n 5) >> fnum.txt 

# OR
{(head -n 10 num.txt | tail -n 3); (head -n 18 num.txt | tail -n 5);} > fnum.txt 
echo "========================"

echo "Join Command"
join file1.txt file2.txt
echo "========================"

join -a 1 file1.txt file2.txt
echo "========================"