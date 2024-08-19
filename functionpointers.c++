#include<iostream>
using namespace std ;

int add (int a , int b){
    return a + b ;

}

int main(){
    int (* funcptr)(int , int )= add;
    cout<<add(9 , 7)<<"\n";
    cout<< funcptr(8,4)<<endl;

}