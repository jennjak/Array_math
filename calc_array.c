#include <stdio.h>

#include "calc_array.h"


void print_mx(int *mx, size_t rows, size_t cols){
    for (int i = 0; i<rows; i++){
        printf("\n");
        for (int j = 0; j<cols; j++){
            printf("%d, ", *(mx + i*cols + j));
        }
    }
}

int transpose(int *A, int *B, size_t A_rows, size_t A_cols){
    int i, j; 
    for (i = 0; i < A_rows; i++) 
        for (j = 0; j < A_cols; j++) 
            *(B + j*A_rows + i) = *(A + i*A_cols + j);
    return 0;
};

void addition(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx){
    if(A_rows == B_rows & A_cols == B_cols){
        for (int i = 0; i < A_rows; i++) {
            for (int j = 0; j < A_cols; j++) {
                *(multMx + i*A_cols + j) = 0;
                    *(multMx + i*A_cols + j) = *(mx_a + i*A_cols + j) + *(mx_b + i*A_cols + j);
                }
        }  
    }
    else {
        printf("Arrays incompatible");
    }     
}

void substraction(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx){
    if(A_rows == B_rows & A_cols == B_cols){
        for (int i = 0; i < A_rows; i++) {
            for (int j = 0; j < A_cols; j++) {
                *(multMx + i*A_cols + j) = 0;
                    *(multMx + i*A_cols + j) = *(mx_a + i*A_cols + j) - *(mx_b + i*A_cols + j);
            }
        }  
    }
    else {
        printf("Arrays incompatible");
    } 
}

void multiplication(int *mx_a, int *mx_b, size_t A_rows, size_t A_cols, 
                    size_t B_rows, size_t B_cols, int *multMx){
    if(A_cols == B_rows){
        for (int i = 0; i < A_rows; i++) {
            for (int j = 0; j < B_cols; j++) {
                *(multMx + i*B_cols + j) = 0;
                for (int k = 0; k < B_rows; k++) {
                    *(multMx + i*B_cols + j) += *(mx_a + i*A_cols + k) * *(mx_b + k*B_cols + j);
                }
            }
        }   
    }
    else{
        printf("Arrays incompatible");
    }   
}



