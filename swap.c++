#include<iostream>
using namespace std ;
 int main(){
    int x  = 0;
    int y = 1 ;
    
    cout<<" x = "<<x<< ", y ="<<y<<endl;
    swap(x,y);
    cout<<" x = "<<x<< ", y ="<<y<<endl;



 }

 void swap(int a , int b){
    int temp =a;
    a = b ;
    b =temp;

 }