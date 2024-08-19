#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"size: ";
    cin>>size;
    //my_array[size];
    int *new_arr = new int  [size];
    for (int i = 0 ; i<size ; i++){
        cout<<"enter a number :";
        cin>> new_arr[i];
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<new_arr[i]<<" ";
    }
    delete[]new_arr;
    new_arr= NULL;
}
