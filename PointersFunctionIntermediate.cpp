#include<iostream>
using namespace std;

void func3(int** q){
    **q = **q + 1;
}

void func2(int** q){
    *q = *q + 1;
}

void func1(int** q){
    q = q+1;
}

int main(){

    int a = 5;

    int* p = &a;

    int**q = &p;

    cout<<"Before "<<q<<endl;
    cout<<"Before "<<*q<<endl;
    cout<<"Before "<<**q<<endl;
    func1(q);
    cout<<"After "<<q<<endl;
    cout<<"After "<<*q<<endl;
    cout<<"After "<<**q<<endl;

    cout<<"Before "<<q<<endl;
    cout<<"Before "<<*q<<endl;
    cout<<"Before "<<**q<<endl;
    func2(q);
    cout<<"After "<<q<<endl;
    cout<<"After "<<*q<<endl;
    cout<<"After "<<**q<<endl;

    cout<<"Before "<<q<<endl;
    cout<<"Before "<<*q<<endl;
    cout<<"Before "<<**q<<endl;
    func3(q);
    cout<<"After "<<q<<endl;
    cout<<"After "<<*q<<endl;
    cout<<"After "<<**q<<endl;

}
