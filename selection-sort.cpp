//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void 
SelectionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	for (int k = 0; k < size-1; k++)
	{
		int index = k;
		int tmp;
		for (int i = k+1; i < size; i++)
		{
			if ((num_cmps++, A[i] < A[index])) index = i;
		}
		tmp = A[k]; // swap A[k] and A[index]
		A[k] = A[index];
		A[index] = tmp;
	}
}
