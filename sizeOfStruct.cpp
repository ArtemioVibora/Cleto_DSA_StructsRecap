#include <iostream>

using namespace std;

struct struct1 {
    char x;
};

struct struct2
{
    char y;
    char z;
};

struct intStruct1
{
    int a;
};

struct intStruct2
{
    int a;
    int b;
    char x;
};

int main()
{
    struct1 s;
    struct2 s1;
    intStruct1 is;
    intStruct2 is2;


    cout << "Size of struct1 is " << sizeof(s) << endl; // Output: 1
    cout << "Size of struct2 is " << sizeof(s1) << endl; // Output: 2
    cout << "Size of intStruct1 is " << sizeof(is) << endl; // Output: 4
    cout << "Size of intStruct2 is " << sizeof(is2) << endl; //output is 12 since an int is 4, and since it is the largest compared to char, .: 
                                                            //the size would be 12
}