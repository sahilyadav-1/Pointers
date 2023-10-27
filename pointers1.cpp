#include<iostream>
using namespace std;

// Pointers advantage
// Efficient memory utilize
// as it passes copy of pointer to function which uses 4 bytes(PC dependent)
// and access the whole data
// but if we doesn't pass pointer to function
// it makes the copy of data 
// which is equal to the size of data

int main(){

    // dangling pointer means pointer pointing to random value
    // int *p; //we doesn't know which address it is pointing

    // int *p = 0;//pointing to null pointer so, it is not a dangling pointer 

    int a = 5; //a is variable
    cout<<&a<<endl; // & is adress of operator

    //create pointer

    int *p = &a; //p is a pointer to data a and * is dereference operator
    // actual meaning of * is value at address pointed by p
    cout<<sizeof(p)<<endl; // gives 4 depends on pc 
    cout<<*p<<endl;

    // create pointer another method

    int i = 6;
    int *b = 0;
    //cout<<*b<<endl; //segmentation fault means illegal memory access try which does not exist
    b = &i;
    cout<<*b<<endl;

    //playing

    int c = 5;
    int *ptr = &c;
    cout<<"c -> "<<c<<endl;//value of c
    cout<<"&c -> "<<&c<<endl;//adress of c
    //cout<<"*c -> "<<*c<<endl;//error
    cout<<"ptr -> "<<ptr<<endl;//adress of c
    cout<<"&ptr -> "<<&ptr<<endl;//adress of ptr
    cout<<"*ptr -> "<<*ptr<<endl;//value of c
    

    return 0;
}