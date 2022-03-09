//
//  main.cpp
//  lab03_2
//
//  Created by Nate Chism on 2/14/22.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#define ROW_SIZE 3
#define COL_SIZE 3

using namespace std;

void input_matrix (int** array){
    string entries;
    /*
     https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
     for finding spaces in entries and separating elements ^^^^^
     */
    cout << "Enter " << ROW_SIZE * COL_SIZE << " elements for this matrix : ";
    
    for (int i = 0; i < ROW_SIZE; i++)      //get user input to populate matrix
        for (int j = 0; j < COL_SIZE; j++){
            cin >> array[i][j];
        }

}

void print_matrix(int** array){
    
    for(int i = 0; i < ROW_SIZE; i++){  //iterate through every row
        cout << endl;
        for(int j = 0; j < COL_SIZE; j++)   //iterate through every column
            cout << setw(10) << array[i][j];
    }
    cout << endl;
    
}

void mul_matrix(int** A, int** B, int** R){
    for(int i = 0; i < ROW_SIZE; i++){  //iterate every row
        for(int j = 0; j < COL_SIZE; j++){  //iterate every columm
            R[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];    //perform row by column multiplication
        }
    }
}

int main() {

    string filename = "result.txt";
    ofstream ofile(filename);   //open results file
    
    if (!ofile) //check if file opened correctly
    {
        cout << "Error opening file..." << endl;
        exit(0);
    }
    

//    //Lines 64 - 74 coded directly using https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
    int** matA = new int *[COL_SIZE];
    for(int i = 0; i < ROW_SIZE; i++)
        matA[i] = new int[COL_SIZE];
    
    int** matB = new int *[COL_SIZE];
    for(int i = 0; i < ROW_SIZE; i++)
        matB[i] = new int[COL_SIZE];
    
    int** matR = new int *[COL_SIZE];
    for(int i = 0; i < ROW_SIZE; i++)
        matR[i] = new int[COL_SIZE];
    
    
    //get user inputs for matrices A and B
    cout << "Let's add elements to matrix A:" << endl;
    input_matrix(matA);
    cout << "Now let's add elements to matrix B:" << endl;
    input_matrix(matB);
    
    //print matrix A
    cout << endl << "A:";
    print_matrix(matA);
    
    //print matrix B
    cout << endl << "B:";
    print_matrix(matB);
    
    //perform matrix multiplication
    mul_matrix(matA, matB, matR);
    cout << "Here is the result: " << endl;
    //print resultant matrix
    print_matrix(matR);
    cout << "You can also fint the product of A and B in \"result.txt\"" << endl;
    
    //write resultant matrix to result.txt
    for(int i = 0; i < ROW_SIZE; i++){
        for(int j = 0; j < COL_SIZE; j++)
            ofile << setw(10) << matR[i][j];
        ofile << endl;
    }
    cout << endl;
    ofile.close();
    
    return 0;
}

