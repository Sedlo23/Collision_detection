//
// Created by jfs on 07.11.19.
//

#ifndef CSEM_MATRIX_H
#define CSEM_MATRIX_H

struct Matrix {
    int rows; // number of rows
    int cols; // number of columns
    double* data; // dim Array
};

struct Matrix* make_matrix(int n_rows, int n_cols);

void print_matrix(struct Matrix *matrix);

void mult_by_num_matrix(struct Matrix *matrix, double a);

double* get_matrix_num(struct Matrix *matrix,int j,int i);


#endif //CSEM_MATRIX_H
