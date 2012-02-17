#!/bin/bash

## Sorting with shell sort

echo "Sorting by shell sort"

for f in ./inputs/*
do
	file=$(basename $f)
	echo "Sorting through $f file..."
	./sort -a H -f $f -o ./outputs/shell/$file -t -c -p
done
