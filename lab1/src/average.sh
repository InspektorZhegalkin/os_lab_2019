#!/bin/sh
exec 0< numbers.txt
count=0
sum=0
while [ -n "$1" ]
do
sum=$[$sum+$1]
count=$[ $count + 1 ]
shift
done
echo $1
echo $count
let "ret=sum / count"
echo $ret