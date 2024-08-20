/*------------------------------EXEMPLE-------------------------
Exemple function that creates arrays and their sizes and uses 
calc_array for different calculations.
----------------------------------------------------------------*/



#include <stdio.h>

#include "calc_array.h"

int main(){
    int A[2][2] = {1, 2, 3, 4};
    int B[2][3] = {1,2,3,4,5,6};
    int C[2][2] = {1, 2, 3, 4};

    //Get the sizes of the arrays
    size_t A_rows = ARRAYSIZE(A);
    size_t A_cols = ARRAYSIZE(A[0]);
    size_t B_rows = ARRAYSIZE(B);
    size_t B_cols = ARRAYSIZE(B[0]);

    int D[A_cols][A_rows];
    int multMx[A_rows][B_cols]; //The multiplied mx 

    transpose(A[0], D[0], A_rows, A_cols); //Transpose the A matrix and saves in matrix D
    print_mx(D[0], A_cols, A_rows);
    
    multiplication(A[0], B[0], A_rows, A_cols, B_rows, B_cols, multMx[0]); //Multiplies matrices A and B and saves the product in multMx
    print_mx(multMx[0], A_cols, B_cols);

    substraction(A[0], C[0], A_rows, A_cols, A_rows, A_cols, D[0]); //Substract matrix C from A and saves the result in D
    print_mx(D[0], A_rows, A_cols);

    return 0;
}