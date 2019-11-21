//
// Created by jfs on 07.11.19.
//
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "matrix.h"



struct Matrix* make_matrix(int n_rows, int n_cols) {
    struct Matrix* tmp_matrix = malloc(sizeof(struct Matrix));
    tmp_matrix->rows = n_rows;
    tmp_matrix->cols = n_cols;
    tmp_matrix->data = malloc(sizeof(double)*n_rows*n_cols);
    return tmp_matrix;
}

void print_matrix(struct Matrix *matrix)
{
    printf("    x| ");
    for (int y = 0; y <matrix->rows ; ++y)
        printf("   %2d    ",y);

    printf("\n");

    for (int y = 0; y <matrix->rows ; ++y)
        printf("----------",y);

    printf("\n");

    for (int x = 0; x <matrix->cols ; ++x)
    {

        printf("%5d| ",x);

        for (int y = 0; y <matrix->rows ; ++y)
        {
            if((matrix->data)[x*matrix->rows+y]!=0)
                printf("    %.0f    ",(matrix->data)[x*matrix->rows+y]);
            else
                printf("         ");
        }

        printf("\n");
    }

}

void mult_by_num_matrix(struct Matrix *matrix, double a)
{
    for (int x = 0; x <matrix->cols ; ++x)
    {
        for (int y = 0; y <matrix->rows ; ++y)
        {
           (matrix->data)[x*matrix->rows+y]*=a;

        }


    }

}

double* get_matrix_num(struct Matrix *matrix,int j,int i)
{
    return &(matrix->data)[j*matrix->rows+i];

}


