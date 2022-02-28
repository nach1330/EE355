//
//  main.c
//  hw1p7test
//
//  Created by Nate Chism on 1/29/22.
//

#include <stdio.h>

/*To write my function and ensure that it properly returned an array, I used https://www.javatpoint.com/return-an-array-in-c to initialize (line 11) my function, intialize the arrays b and B (line 12 and 30)
    as well as brush up on my pointer notation skills used in lines 19 and 35.
    I has forgot how to return an array through a function, but this website provided several helpful examples of how to return an array and assign it to a value in the main code.
*/
int * populateProduct(int orig[], int N){
    int *b;
    for(int i = 0; i < N; i++){ //iterate through array A positions
        *(b+i) = 1; //initialize all starting values of B[i] to 0 so no accidental multiplaction by 0
        for(int j = 0; j < N; j++){ //iterate through A values
            if( j != i) //skipping current index
                *(b+i) = *(b+i) * orig[j];  //multiply B[j] by all vlaues of A except current index
        }
    }
    return b;   //return array b
}

int main()
{
    int n = 4;  //array size
    int A[] = {4,6,2,8};    //populate original array with values
    
    int *B; //array of products
    B = populateProduct(A, n);  //populated by function
    
    //print new populated array for user
    printf("B : {");
    for(int i = 0; i < n; i++)
        printf(" %d,", *(B + i));
    printf("}\n");

    return 0;
}
