/*
MIDTERM 1 STUDY GUIDE - C++
*/

//PS1

//1 d) (for exam)  (2 pts – < 1 Min.)
/*
The Fibonacci numbers are defined:
fibonacci (0) = 1
fibonacci (1) = 1
fibonacci (n) = fibonacci (n - 1) + fibonacci (n - 2);
Write a recursive C++ function to compute the Fibonacci numbers.
*/

int fib(n){
    if (n == 1 || n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

//1 e) (for exam) (2 pts – < 1 Min.)

/* A and B are Boolean variables. Expression (!A) || (!B) is equivalent to which of the following conditions:
i. (! (A && B))             <-- ANSWER
ii. (! (A || B))
iii. (!A) && (!B)
iv. True
v. None of the above */



//1 f) (for exam) (2 pts – < 1 Min.)
//What is the difference between the two declarations?
//i.
int * newint = new int [size];
//this declaration is a pointer that points to a dynamically allocated array of size 'size'
//ii.
int * intptr [SIZE];
//this deckaration is an array of pointers of size 'SIZE'

//1 g) (for exam) (3 pts – < 1 Min.)
//What is the output of this code?
int main ()
{
int ** a;
int b[2][2] = {0,1,2,3};
a=b;
cout << b[0][0] << endl;
cout << **a;
return 0;
}

//THIS WILL NOT COMPILE a double pointer cannot be assigned a 2D array


//1 i) (for exam) (1 pt – < 1 Min.)
//Suppose we define:
int a[] = {3, 6, 9, 12, 15};
int* addr = &(a[0]); //pointer addr points to addr of a[0]
/* What is the value of (*addr)+4?
What is the value of *(addr+4)? */

(*addr) + 4 has a value of 7
*(addr+4) has a value of 15

//1 k) (for exam) (3 pts – 2 Min.)
//What are the three lines of output produced by this program?
int g(int x)
{
 int tmp = x+1;
 return x * tmp;
}
int f(int x, int y)
{
 x += y;
 return g(x);
}
int main()
{
 int x = 3;
 cout << g(x) << endl;      //input is 3, function does 3*4, output is 12
 cout << f(x, 1) << endl;   //input is 3 and 1, function does g(4), g does 4*5, output is 20
 cout << f(x, 2) << endl;   //input is 3 and 2, function does g(5), g does 5*6, output is 30
}

12
20
30

//6 x)  (for exam) Code Setup (15 Points – 5 Min.)
/* Write a declaration for a class Person, Student and Professor.
Person contains First Name, Last Name, Address and Phone Number of the Person.
Student and Professor must be sub classes of class Person.
Student contains, along with the above attributes, ID and GPA.
Professor can access the list of students but cannot access the address of the student.
All attributes must be private. You can access them using some get and set methods that you can declare appropriately. 
You need not define any of the methods. */

class Person{
    private:
    string firstN;
    string lastN;
    string address;
    int phoneNum;
    public:
    Person();
    getFirst(); //gets first name
    getLast();  //gets last name
    getAddr();  //gets address
    getPhone(); //gets phone number
    setFirst(); //sets first name
    setLast();  //sets last name
    setAddr();  //sets address
};

class Student : public Person{
    private:
    int ID;
    double GPA;
    public:
    Student();  
    setID();    //sets ID number
    setGPA();   //sets GPA value
    getID();    //returns ID number
    getGPA();   //returns GPA value
};

class Professor : public Person{
    public:
    Professor();
};

int main(){
    Student class1[10]; //array of 10 students
}

//PS2

//1) (for exam)  Short answer (1 pt, 1 min)  
/* Constructors for an instance of a class          
a) Are called when the instance goes out of scope (i.e. is de-allocated?)
b) Can be used to set data members to a known initial value/state.
c) Can be overloaded (i.e. multiple constructors with different argument lists)
d) Are called automatically only when the instance is allocated dynamically with ‘new’ but not when the instance is declared statically as a local variable
e) b and c
f) b and c and d */

//ANSWER -> e
//a and d are true of desctructors, NOT constructors


//2) (for exam) Short answer (1 pt, 1 min)  
// Is there a difference between class and struct?

//class has default access of private, struct has default access of public

//7)  (for exam) Coding questions  (4pts, 5 mins 
/* Write a Change class with quarters, dimes, and pennies (no nickels for simplicity).
The attributes are total amount of money and the functions have to get change of less than 1$. */
class Change{   
    private:
    double value;
    public:
    Change (double total){
        value = total;
    }
    getQuarters(){
        int remainder = (int)(value * 100) % 100;   //if value = 3.45, remainder = 45
        return (int)remainder/25;
    }
    getDimes(){
        int remainder = (int)(value * 100) % 100;
        remainder -= getQuarters()*25;
        return (int)remainder/10;
    }
    getPennies(){
        int remainder = (int)(value * 100) % 100;
        remainder -= (getQuarters()*25 + getDimes()*10);
        return remainder;
    }
    addChange(const Change& other){
        this->value += other.value;
    }
};

//8) (for exam) short answer (4pts, 7mins) 
/* Consider the following class declarations for all parts of this question. 
(Assume appropriate #includes and 'using' statements) */
class ABC
{
public:
ABC (int myx, string myy);
string foo (double z);
protected:
int& getx () {return X ;}
string y_;
private:
int x_;
};

class DEF: public ABC{}
public:
DEF (int myx, string myy);
string foo (double z);
int bar (); 
};

int main(){}
ABC a(4, "hi");
DEF d(6, "world");
}

//a) Consider the public, protected and private specifiers. Also assume the declarations of ABC & DEF object shown in main (). Then indicate whether each statement is True or False.
/* i. (True / False): From within main (), the statement cout << a.x_ << endl; willcompile.
FALSE, x_ is private, can only be accessed in ABC member func

ii. (True / False): From within main (), the statement cout << d.y_ << endl; willcompile.
FALSE, y_ is protected, can only be accessed in ABC member func or DEF member func

iii. (True / False): From within main (), a call to a.getx(); is visible and accessible.
FALSE, getx() is protected, can only be accessed in ABC or DEF member func

iv. (True / False): From within main (), a call to a.foo(12.5); is accessible and willcompile.
TRUE, foo() is public

v. (True / False): From within main (), a call to d.bar(); is accessible and will compile.
TRUE, bar() is public

vi. (True / False): From within DEF :: bar(), the statement cout << x_ << endl; willcompile.
FASLE, x_ is a private memeber of ABC and can only be accessed in ABC member func

vii. (True / False): From within DEF :: bar(), the statement cout << y_ << endl; willcompile.
TRUE, y_ is protected so it can be accessed by child classes (i.e. ABC and DEF member func)

viii. (True / False): From within main (), a call to d.foo(15.5); will call ABC::foo(). 
FALSE, the foo() in DEF is being called, so we dont even look at ABC

//if not virtual, will default to base when ptr -> derived
*/



//15) (for exam) OOP(3pts, 4mins)
/* Determine if the statement is true or false:
a) Member functions always must be public.
FALSE

b) Using == with two structs is a way to check if their data members are identical.
FALSE, unless you overide the == operator

c) It is possible for a class to have more than one different constructor.
TRUE, we can overide constructors for different data types, different # of inputs, etc.

d) It is possible for a class to have more than one different destructor. 
FALSE
*/

//24) (for exam) coding question (3pts, 10mins)   
/* Selection sort is a sorting technique wherein we first search for the smallest element and swap its place with position 1, 
then search for the second smallest and swap with position 2 and so on. Write an algorithm to perform selection sort. */
int A[10] = {...}
min = A[0]
min spot = 0;
while(i < 10)
    for(range j)
        if A[j] < A[min]
            min = A[j]
            min_spot = j;
    temp = A[i]
    A[i] = min;
    A[min_spot] = temp;





// (for exam) Declare a local variable, p, that is a pointer to an int. (1pt, 0.5min)
int *p;
// (for exam) Make p point to an int named x (that was already declared earlier). (1pt, 0.5min)
int x;
p = &x;
// (for exam) Show how you would call this function: void (int *ptr) and pass p as the argument. (1pt, 0.5min)
void f(int *ptr){}
f(p);
// (for exam) Assuming you’re in void f1(int *ptr) change x’s value to 7. (1pt, 0.5min)
void f1(int *ptr){
    *ptr = 7;
}
// (for exam) Make the pointer p point to a single, new dynamically allocated int. (1pt, 0.5min)
p = new int;
// (for exam) Declare a point q, to a double and make it point to a dynamically allocated array of 10 doubles. (2pt, 0.5min)
double *q = new double[10];
// (for exam) Set the 5th double to 0 in the array pointed to by q. (2pt, 0.5min)
q[4] = 0;
// (for exam) Declare a pointer, r, that points to a dynamically allocated array of 5 integer points. (1pt, 0.5min)
int *r = new int[5];
// (for exam) Make the 0th pointer in r point to a dynamically allocated array of 8 integers. (2pt, 0.5min)
r[0] = new int[8];
// (for exam) Make the 1st pointer in r point to the integer that p is point at. (2pt, 0.5min)
r[1] = p;
// (for exam) Statically allocate an array called s to 6 pointers to character array. (1pt, 0.5min)
char *s[6];
// (for exam) Dynamically allocate a character array that can hold a string of 10 good characters and have the last pointer in the s array point to it. (3pt, 1min)
s[5] = new char[11];
// (for exam) Declare a statically allocated character array, t, that contain the words “EE355x Yea!”. (2pt, 0.5min)
char t[] = "EE355x Yea!";
// (for exam) Copy the string in t to the string that the last pointer in s points to. (3pt, 1min)
strcpy(s[5], t);
// (for exam) Deallocate all the memory that the s array consumes and points at. (3pt, 1min)
delete[] s[5];

//16 (for exam) Shown an example of dynamic de-allocation for a 1-D array of size N = 10.
#define N 10
int* A1 = new int[10];

delete[] A1;
//17  Dynamically deallocate a 2-D array of size M × N = 4 × 5. using a single pointer pointing at the array. 
#define M 4
#define N 5
int* A2 = new int[M * N];

delete[] A2;
//18 Dynamically deallocate a 2-D array of size 4 by 5, using an array of pointers (with a double pointer).
#define M 4
#define N 5
int** A3 = new int*[M];

for(int i = 0; i < M; i++)
    A3[i] = new int[N];

for(int i = 0; i < M; i++)
    delete A3[i];

delete[] A3;

//1) (for exam) Palindrome  [8 points, 5 min]
/* Given a string, check if the given string is palindrome. A string is said to be palindrome if reverse of the string is same as string. 
For example, “refer” is palindrome, but “apple” is not palindrome.  */


//2) (for exam) Permutation [10 points, 10 min]
/* Design the pseudocode, for generate all binary number permutations of a given length such that every permutation has more or equal number of 1s than 0s, in any prefix (i.e., subset starting index 0) of that permutation. [10 points. 10 min.]
Examples:
Input: len = 4
Output: 1111 1110 1101 1100 1011 1010
Note that a permutation like 0101 can not be in the output because there are more 0s from index 0 to 2 in this permutation. However check that each of the above (Output) permutations, has more 1s than 0s in any prefix. 
Input: len = 3
Output: 111 110 101
Input: len = 2
Output: 11 10 */

//4) (for exam) Stair Problem [10 points, 10 min]
/* In class we had talked about the stair problem where one jump and two jumps are allowed to climb n stairs and the question was to find different number of ways 
(refer to page 40 of recursion slides, or check geeksforgeeks climing). 
The answer looks like a Fib (n) calculation which can be recursively written as a function of F(n-1) and F(n-2). 
Now in this problem let's assume 3 jumps, two jumps and 1 jumps are allowed. Design the pseudocode of your solution.   */

