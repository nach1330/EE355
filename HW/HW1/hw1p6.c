//
//  hw1p6.c
//  
//
//  Created by Nate Chism on 1/26/22.
//

#include <stdio.h>


/*
 This program aims to answer the following:
 
 Write a short C program (No C++ allowed here) to swap the 2 variables without using a temporary variable. Also, explain the cases (if any) where your program might fail.
 
 This program might fail if handling an array or string (array of char). Because the notation uses
 basic assignment operators (=,+,-) an array would not be an appropriate input.
 
 */


int main()
{
    int A = 2, B = 6;   //two variables with values
    B = B + A;  //move value A to B
    A = B - A;  //change A to previous value of B
    B = B - A;  //change B to original value of A
    printf("A : %d\nB : %d", A, B);

    return 0;
}
