//
//  main.cpp
//  hw03p04
//
//  Created by Nate Chism on 2/26/22.
//

//Lines 15-37 were coded directly using https://www.geeksforgeeks.org/matrix-multiplication-recursive/

#include <iostream>
#include <iomanip>
using namespace std;
#define MAX_SIZE  100

void mult_matrix(int A[][MAX_SIZE], int rowA, int colA, int B[][MAX_SIZE], int rowB, int colB, int R[][MAX_SIZE]){
    static int row_ct = 0, col_ct = 0, k = 0;
    if(colA != rowB)
        return;

    if(row_ct >= rowA){
        return;
    }

    if(col_ct < colB){
        if(k < colA){
            R[row_ct][col_ct] += A[row_ct][k] * B[k][col_ct];
            k++;

            mult_matrix(A, rowA, colA, B, rowB, colB, R);
        }

        k = 0;
        col_ct++;
        mult_matrix(A, rowA, colA, B, rowB, colB, R);
    }
    col_ct = 0;
    row_ct++;
    mult_matrix(A, rowA, colA, B, rowB, colB, R);
}

int main() {
    int rowA = 2, colA = 3, rowB = 3, colB = 2;
    int A[][MAX_SIZE] = {{1, 2, 3}, {4, 5, 6}}, B[][MAX_SIZE] = {{7, 8}, {9, 10}, {11, 12}};
    
    int R[2][MAX_SIZE] = {};
    int newRow = rowA, newCol = colB;
    mult_matrix(A, rowA, colA, B, rowB, colB, R);

    for(int i = 0; i < newRow; i++){
        for(int j = 0; j < newCol; j++)
            cout << setw(5) << R[i][j];//*(*(array + i) + j) << " ";
        cout << endl;
    }
    cout << endl;
}

