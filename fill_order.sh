#!/bin/bash

DIR=$1;
if [[ ! -d $DIR ]]
then
    mkdir -p $DIR;
fi
cd $DIR;

echo "Creating metadata.txt";
touch metadata.txt;

read -p "Enter start: "  start;
read -p "Enter end: " end;

echo "Creating directories from $start to $end";

for (( i = start; i <= end; ++i )); 
do 
    printf -v num '%02d' $i; 
    mkdir $num; 
done

dirs=`ls -d ./*/`

for dir in $dirs;
do
    touch ${dir}order.txt;
    echo $dir;
done

echo "done";


