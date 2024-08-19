#include<iostream>
using namespace std ;
void Print (void * ptr,char type){
    switch (type){
        case 'i':cout<<*((int*)ptr)<<endl;break;
        case 'c':cout<<*((char*)ptr)<<endl;break;


    }

}

int main (){
    // void pointer stores data of any type
    int n = 5 ;
    char a = 'a';
    Print(&n,'i') ;
    Print(&a,'c') ;
}