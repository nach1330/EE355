//
//  lab1p4.c
//  lab1p4
//
//  Created by Nate Chism on 1/31/22.
//

/*
    sources:
    
    https://www.programiz.com/c-programming/c-file-input-output
    
    https://www.tutorialspoint.com/cprogramming/c_input_output.htm

 
    https://www.dreamincode.net/forums/topic/247005-c-language-reading-a-text-file-word-by-word-into-array-of-strings/
 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char filename[100];
    FILE *f_in, *f_out;
    int i = 0, j = 0, ch, final_ct = 0, ct_match  = 0;
    char allWords[100][50];
    char c;
    
    printf("ENTER FILE NAME : ");
    gets(filename);
    
    f_in = fopen(filename, "r");
    f_out = fopen("out.txt", "w+");
    
    if(!f_out){
        printf("ERROR OPENING FILE...");
        
        return 0;
    }
    
    if(!f_in){
        printf("ERROR OPENING FILE...");
        
        return 0;
    }
    
    while((ch = getc(f_in)) != EOF){
        c = ch;
        if (c < 65 || (c>90 && c<97) || c>122 ){
            while(j < 50)
                allWords[i][j++] = '\0';
            i++;
            j = 0;
        }
        else{
            allWords[i][j++] = c;
        }
    }
    
//    if (strcmp(allWords[3], allWords[4]) == 0)
//        printf("%s : %s", allWords[3], allWords[4]);

    for(int k = 0; k < i; k++){
        for(int l = 0; l < i; l++){
            if(strcmp(allWords[k], allWords[l]) == 0){
                printf("%s : %s\n", allWords[k], allWords[l]);
                printf("%d : %d\n", k, l);
                ct_match++;
            }
        }
        if(ct_match <= 1){
            final_ct++;
        }
        ct_match = 0;
    }
    
//    if (final_ct != 0 || (final_ct == 0 && i == 0))
        final_ct++;
    printf("\n\n%d\n", final_ct);
    
    if (final_ct == 1)
        fprintf(f_out, "There is one distinct word or the file is empty");
    else
        fprintf(f_out, "There are %d distinct words in %s", final_ct, filename);
    
    fclose(f_in);
    flcose(f_out);
    return 0;
}
