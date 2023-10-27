#include<iostream>
using namespace std;

int main(){

    int a = 5;

    int* p = &a; // p is a pointer to integer data

    int** q = &p; // q is a pointer to int* data

    cout<<&a<<endl; // address of a
    cout<<a<<endl; // value of a
    // cout<<*a<<endl; // error

    cout<<&p<<endl; // address of p
    cout<<p<<endl; // address of a
    cout<<*p<<endl; // value of a

    cout<<&q<<endl; // address of q
    cout<<q<<endl; // address of p
    cout<<*q<<endl; // address of a
    cout<<**q<<endl; // value of a
    
}
