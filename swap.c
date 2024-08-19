#include<stdio.h>
void swap();

int main (){
    /*int n = 5;
    int *p = &n ;
    printf("%d\n",n);
    printf("%p\n",p);
    printf("%p\n",&n);
    printf("%p\n",&p);
    printf("%d\n",*p);*/
    int x = 11 ;
    int y = 70 ;
    printf("x = %d , y = %d\n", x ,y );
    swap(&x,&y);
    printf("x = %d , y = %d\n", x ,y );  
}
void swap(int *a , int *b ){
    int temp = *a ;
    *a = *b ;
    *b = temp;
}