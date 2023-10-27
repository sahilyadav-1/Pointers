#include<iostream>
using namespace std;

// sizeof(pointer) will be 4(PC dependent) --- 8 in macbook
// sizeof(pointer) will be same whether it is char,array,int or anything

void dummy(int *arr, int n){ // we can pass as *arr as well as arr[] but arr[] gives warning also gives answer
    cout<<sizeof(arr); // gives 4
}

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl; //address of arr[0]
    cout<<*arr<<endl; //*arr means *(arr + 0) so, it will give value of arr[0]

    cout<<&arr[0]<<endl; //address of arr[0]
    cout<<&arr<<endl; // self referencing gives address of arr[0]

    cout<<*arr<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<*(arr + 2)<<endl;
    cout<<*(arr + 3)<<endl;
    cout<<*(arr + 4)<<endl;

    // IMPORTANT !!!!!
 
    int i=0;
    cout<<i[arr]<<endl;

    // we can access array as arr[i] as well as i[arr] 
    // because
    // in memory it is stored as
    // *(arr + i) 
    // so, arr + i and i + arr are same

    // int arr[] = {1,2,3,4,5};
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // dummy(arr,5);

}
