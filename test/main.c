#include<stdio.h>
#include"trans.h"
#include<stdlib.h>

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
    const int M = 4;
    const int N = 4;

    double A[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

    printf("Before Transpose:\n\n");
    display_matrix((double*)A, M, N);
    
    double* B = trans((double*)A, M, N);
    
    printf("After Transpose:\n\n");
    display_matrix(B, N, M);

    // free allocated memory
    free(B);
}

