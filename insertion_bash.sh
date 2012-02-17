#!/bin/bash

## Sorting with shell sort

echo "Sorting by insertion sort"

for f in ./inputs/*
do
	file=$(basename $f)
	if [ $file != "10000000_dec.txt"  ] && [ $file != "10000000_rand.txt" ]; then
		echo "Sorting through $f file..."
		./sort -a I -f $f -o ./outputs/insertion/$file -t -c -p
	else
		echo "Skipping $file..."
	fi
done
