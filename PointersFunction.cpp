#include<iostream>
using namespace std;

int func1(int *p){
    *p = *p + 1; //increase in value of a at its adress
}

int func(int *p){//value of a
    p = p+1; // increase in value of address
}

int main(){
    int a = 5;
    int *p = &a;

    cout<<"Before p -> "<<p<<endl; //p means &a
    cout<<"Before *p -> "<<*p<<endl; //*p means value at a
    
    func(p); //&a is passed here
    // To change the value of any variable in the function 
    // we have to pass the address of that variable in the function.
    cout<<"After p -> "<<p<<endl; //No change 
    cout<<"After *p -> "<<*p<<endl; //No change 

    cout<<"Before p -> "<<p<<endl; //p means &a
    cout<<"Before *p -> "<<*p<<endl; //*p means value at a
    
    func1(p); //&a is passed here

    cout<<"After p -> "<<p<<endl; //No change because we doesn't try to change at p
    cout<<"After *p -> "<<*p<<endl; //a increased by 1 

    return 0;
}
