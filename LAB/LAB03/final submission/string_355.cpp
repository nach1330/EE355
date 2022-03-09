//
//  main.cpp
//  hw03p03b
//
//  Created by Nate Chism on 2/27/22.
//

#include <iostream>
using namespace std;

class str_class {
private:
    //private data values
    char* str_data_;
    int str_size_;
public:
    str_class(){    //generic constructor
        str_data_ = nullptr;
        str_size_ = 0;
    }
    
    str_class(char* str, int size){ //constructor with input population
        str_data_ = new char[size + 1]; //allocate space for new str_class
        str_size_ = size;
        for(int i = 0; i < size; i++)   //populate str_class variable
            str_data_[i] = str[i];
    }
    
    ~str_class(){
        delete[] str_data_; //deallocate memory
    }
    
    //string deep copy [LINES 33-38] coded directly using  https://github.com/bryangoodrich/cpp_String/blob/master/String.cpp
    str_class(const str_class& str){    //deep copy
        str_size_ = str.str_size_;
        str_data_ = new char[str_size_ + 1];    //allocate space for new str_class
        for(int i = 0; i < str_size_; i++)  //populate str_class variable
            str_data_[i] = str.str_data_[i];

    }
    
    void add_new_item(char c){  //add new value to end of the string
        str_size_++;    //increase string size
        str_data_[str_size_ - 1] = c;
    }
    void delete_last_item(){    //remove character at the end of the string
        str_data_[str_size_ - 1] = '\0';
        str_size_ --;   //decrease string size
    }
    
    int str_size(){ //return size of the string
        return str_size_;
    };
    
    char* str_data(){   //return contents of the string
        return str_data_;
    };
};

int main() {
    char* str = "hello";
    str_class s(str, 5);
    str_class s2 = s;
    s.add_new_item('a');
    s2.delete_last_item();
    
    cout << s.str_data() << endl;
    cout << s2.str_data() << endl;
//
    return 0;
}
