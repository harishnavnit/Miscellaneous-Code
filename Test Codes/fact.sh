#! /bin/bash

read -p "Enter the number : " num
i=1

while [ $i -le $num ]
do
    fact=$((fact * $i))
    i=$((i+1))
done
echo "Factorial : $fact"
echo
