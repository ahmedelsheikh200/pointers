#include<stdio.h>

int main () {
    int n = 5;
    int *ptr = &n ;
    printf("%d\n", n);
    printf("%p\n",&n);
    printf("%p\n",ptr);
    printf("%p\n",*ptr);
    *ptr = 10;
    printf("%d\n", n);
    int a = 10;
    int b = a ;
    b = 15;
    printf("%d\n", a);
    printf("%d\n", b);


    return 0;
}