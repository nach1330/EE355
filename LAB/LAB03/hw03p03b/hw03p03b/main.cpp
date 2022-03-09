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
    char* str_data_;
    int str_size_;
public:
    str_class(){
        str_data_ = nullptr;
        str_size_ = 0;
    }
    
    str_class(char* str, int size){
        str_data_ = new char[size + 1];
        str_size_ = size;
        for(int i = 0; i < size; i++)
            str_data_[i] = str[i];
    }
    
    ~str_class(){
        delete[] str_data_;
    }
    
    str_class(const str_class& str){
        str_size_ = str.str_size_;
        str_data_ = new char[str_size_ + 1];
        for(int i = 0; i < str_size_; i++)
            str_data_[i] = str.str_data_[i];

    }
    
    void add_new_item(char c){
        str_size_++;
        str_data_[str_size_ - 1] = c;
    }
    void delete_last_item(){
        str_data_[str_size_ - 1] = '\0';
        str_size_ --;
    }
    
    int str_size(){
        return str_size_;
    };
    
    char* str_data(){
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
