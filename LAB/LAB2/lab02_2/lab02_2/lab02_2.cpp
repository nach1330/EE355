//
//  lab02_2.cpp
//  lab02_2
//
//  Created by Nate Chism on 2/5/22.
//

#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        Person(){
            name = "";
            age = -1;
        }
       virtual void print_message(){
            cout << "---------------\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
        }
};

class Student: public Person{
public:
    Student(string n, int a, string s, string m){
        name = n;
        age = a;
        school = s;
        major = m;
    }
    void print_message(){
        cout << "---------------\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "School: " << school << "\n";
        cout << "Major: " << major << "\n";
    }
private:
    string school;
    string major;
};

int main(){
    //Use these lines to test your code
    Person p1("Tommy",28);
    p1.print_message();

    Student s1 = Student("Anna",22,"USC","EE");
    Person *p2 = &s1;
    p2->print_message();
    return 0;
}
