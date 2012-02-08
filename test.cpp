#include "sort.h"
#include <ctime>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int* makeRandomArray(int size)
{
	int* A = new int[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % size;
	}
	return A;
}

void print(int A[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "A[" << i << "]: " << A[i] << endl;
	}
}

int main()
{
	srand(time(NULL));
	int size = 10;
	
	int* A = makeRandomArray(size);
	cout << "Pre-sorted\n";
	print(A, size);

	ShellSort shell;
	shell.sort(A, size);
	cout << "Shell sort\n";
	print(A, size);

	int* B = makeRandomArray(size);
	cout << "Pre-sorted\n";
	print(B, size);

	InsertionSort insert;
	insert.sort(B, size);
	cout << "Insertion sort\n";
	print(B, size);
}
