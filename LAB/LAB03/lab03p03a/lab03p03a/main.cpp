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
    cout << "Enter number of items : ";
    cin >> item_ct;
    double *items = new double[item_ct];
    
    if(!items){
        cout << "Memory allocation failed." << endl;
    }
    else{
        cout << "Enter cost:" << endl;
        for(int i = 0; i < item_ct; i++){
            cout << "Item" << i+1 << " : ";
            cin >> items[i];
            cin.ignore(256, '\n');
        }
    }
    cout << "\n\nDisplay of cost : " << endl;
    for(int i = 0; i < item_ct; i++){
        cout << "Item" << i+1 << " : " << items[i] << endl;
    }
    
    delete[] items;
    return 0;
}
