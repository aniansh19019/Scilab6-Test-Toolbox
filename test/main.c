#include<stdio.h>
#include"trans.h"
#include<stdlib.h>

// this file has been modified for task 2

void display_matrix(double* A, int m, int n)
{
    printf("{\n");
    for(int i=0; i<m; i++)
    {
        printf("\t{");
        for(int j=0; j<n; j++)
        {
            printf("%lf",*(A+(j+(i*n))));
            if(j<n-1)
            {
                printf(", ");
            }
        }
        printf("}\n");
    }
    printf("}\n");
}
int main()
{
    // example test case
    const int M = 2;
    const int N = 4;

    double A[2][4] = { {1,2,3,4}, {5,6,7,8}};

    double* B = (double*)malloc(sizeof(A));

    printf("Before Transpose:\n\n");
    display_matrix((double*)A, M, N);
    
    B = trans((double*)A, B, M, N);
    
    printf("After Transpose:\n\n");
    display_matrix(B, N, M);

    // free allocated memory
    free(B);
}

