#include<iostream>
using namespace std;

int main(void){
 int a = 5;
 int * ptr = &a ;
 cout << ptr << endl;
 cout << *ptr << endl ;
 /* create a pointer to the pointer 
 int **dou_ptr = &ptr ;
 cout << dou_ptr << endl;
 cout << *dou_ptr << endl;*/
/* type of pointer should be the same of the variable
float z =3.5;
float *p = &z ;
*/

}