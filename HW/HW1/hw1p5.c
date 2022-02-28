//
//  hw1p5.c
//  
//
//  Created by Nate Chism on 1/27/22.
//

#include <stdio.h>

int main()
{
    //array sizes
    int m = 3, n = 7;
    //arrays to sort
    double arraynums1[] = {1, 1, 15}, arraynums2[] = {7, 8, 13, 20, 54, 100, 123}, aFinal[m+n];
    //array index counters
    int i = 0, j = 0, k = 0;
    
    //while loop conditions and sorting algorithm (lines 19-44) implemented using https://www.geeksforgeeks.org/merge-two-sorted-arrays/ conditioning
    while( i < m && j < n){
        //insert array values to maintain sorted manner
        if (arraynums1[i] < arraynums2[j]){ //if a1 value should be inserted before a2 value
            aFinal[k] = arraynums1[i];
            i++;
        }
        else{   //if a2 value should be inserted before a1 value
            aFinal[k] = arraynums2[j];
            j++;
        }
        k++;
    }
    //if arraynums1 still has values greater than all of arraynums2 empty into aFinal
    while (i < m){
        aFinal[k] = arraynums1[i];
        i++;
        k++;
    }
    
    //if arraynums2 still has values greater than all of arraynums1 empty into aFinal
    while (j < n){
        aFinal[k] = arraynums2[j];
        j++;
        k++;
    }
    
    double median;
    int med_i = (m+n)/2;    //initialzie median value to average of m and n
    
    //median algorith for odd vs even aFinal size
    if (((m+n)%2) == 0){
        median = (aFinal[med_i - 1] + aFinal[med_i]) / 2;   //average of two middle values
    }
    else{
        median = aFinal[med_i]; //true median values
    }
    
    //print final merged, sorted array
    for(int i = 0; i < m + n; i++)
        printf("%f,", aFinal[i]);
        
    printf("\n%f", median); //display median
    return 0;
}
