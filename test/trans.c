/*
C function to transpose an m x n matrix.
Written by: Aniansh Raj Singh

The following function accepts a pointer to the first element of a 2d double type array, the number of rows m, and the number of columns n.
The function allocates memory for the new matrix and returns a pointer to the first element of the new matrix.
The new matrix is unrolled into a linear array of elements.

*/

#include<stdlib.h>

double* trans(double* A, int m, int n)
{
	// allocating new space for the transposed matrix
	double* retval = (double*)malloc(m*n*sizeof(double));
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			*(retval+(i+(j*m))) = *(A+(j+(i*n)));
		}
	}
	return retval;
}
