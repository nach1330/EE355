//
//  main.cpp
//  lab03p04
//
//  Created by Nate Chism on 2/27/22.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string inputFN = "input.txt", greaterFN = "gt_k.txt", lessFN = "lt_k.txt";
    string word;
    ifstream ifile(inputFN);
    
    if (!ifile)
    {
        cout << "Error opening input.txt file..." << endl;
        exit(0);
    }
    
    ofstream GTofile(greaterFN);
    
    if (!GTofile)
    {
        cout << "Error opening gt_l.txt file..." << endl;
        exit(0);
    }
    
    ofstream LTofile(lessFN);
    
    if (!LTofile)
    {
        cout << "Error opening lt_k.txt file..." << endl;
        exit(0);
    }
    
    cout << "We are going to find how many words in a file are less than and greater than a certain value" << endl << "Enter a value : ";
    int k;
    cin >> k;
    
    while (true)
    {
        ifile >> word;
        if (!ifile)
            break;
        int count = 0;
        for(int i = 0; i < word.length(); i++){
            if(!ispunct(word[i]))
                count++;
        }
        if(count >= k)
            GTofile << word << " ";
        else
            LTofile << word << " ";

        count = 0;
    }
    
    return 0;
}
