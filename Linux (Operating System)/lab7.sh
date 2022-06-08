for i in {1..5}
do
	if((i == 3))
	then
		break
	fi
	echo $i
done
echo "========================"

for i in {1..5}
do
	if((i == 3))
	then
		continue
	fi
	echo $i
done
echo "========================"

a=10
b=20
if [ $a != $b ]; then
	echo "$a != $b : a is not equal to b"
else
	echo "$a != $b : a is equal to b"
fi
echo "========================"

a=10
b=20
if [ $a -lt 100 -a $b -gt 15 ]; then
	echo "$a -lt 100 -a $b -gt 15 : returns true"
else
	echo "$a -lt 100 -a $b -gt 15 : returns false"
fi
echo "========================"

# we use [[]] if we use && or ||
if [[ ($a -lt 100) && ($b -gt 15) ]]; then
	echo "$a -lt 100 -a $b -gt 15 : returns true"
else
	echo "$a -lt 100 -a $b -gt 15 : returns false"
fi
echo "========================"

if ((a<100 && b>15)); then
	echo "$a -lt 100 -a $b -gt 15 : returns true"
else
	echo "$a -lt 100 -a $b -gt 15 : returns false"
fi
echo "========================"

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

NUMS="1 2 3 4 5 6 7" 
for NUM in $NUMS 
do 
Q=`expr $NUM % 2` 
if [ $Q -eq 0 ] 
then 
echo "Number is an even number!!" 
continue 
fi
echo "========================"
echo "Found odd number" 
done
echo "========================"

