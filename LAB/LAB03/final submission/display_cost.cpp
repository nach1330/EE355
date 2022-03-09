//
//  main.cpp
//  lab03p03a
//
//  Created by Nate Chism on 2/27/22.
//

#include <iostream>
using  namespace std;

int main() {
    int item_ct;
    //prompt the user for a number
    cout << "Enter number of items : ";
    cin >> item_ct;
    double *items = new double[item_ct];
    
    if(!items){ //check that the new memory was created
        cout << "Memory allocation failed." << endl;
    }
    else{
        //ask user to populate array with cost values
        cout << "Enter cost:" << endl;
        for(int i = 0; i < item_ct; i++){
            cout << "Item" << i+1 << " : ";
            cin >> items[i];
            cin.ignore(256, '\n');
        }
    }
    //display user entries
    cout << "\n\nDisplay of cost : " << endl;
    for(int i = 0; i < item_ct; i++){
        cout << "Item" << i+1 << " : " << items[i] << endl;
    }
    
    //deallocate the memory
    delete[] items;
    return 0;
}
