#include "stdint.h"

#define ARRAYSIZE(mx) (sizeof(mx)/sizeof(mx[0]))

void print_mx(int *mx, size_t rows, size_t cols);

int transpose(int *A, int *B, size_t A_rows, size_t A_cols);

void addition(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx);

void substraction(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx);

void multiplication(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx);