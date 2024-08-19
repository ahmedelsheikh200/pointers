//Return multiple values from a function using pointers?
#include<iostream>
using namespace std;

/* int find_smallest_number(int arr[],int len){
    int minimum = arr[0];
    for (int i = 1 ; i<len ; i++){
        if (arr[i] < minimum) 
        minimum = arr[i];

    }
        return minimum;

}
int find_highest_number(int arr[],int len){
    int max = arr[0];
    for (int i = 1 ; i<len ; i++){
        if (arr[i] > max) 
        max= arr[i];

    }
        return max;

}*/

//instead of 2 funs , only win retyrn 2 values using pointers
void get_min_and_max(int arr[],int len,int*min,int*max){
        for (int i = 1 ; i<len ; i++){
        if (arr[i] > *max) 
        *max= arr[i];
        if (arr[i] < *min) 
        *min= arr[i];}

} 

int main(){
    //int arr [7]= {8,3,9,7,14,2,8};
    int arr1 [9]={8,12,3,15,277,4,1,9,18};
    //int smallest = find_smallest_number(arr1,9);
    //int highest = find_highest_number(arr1,9);
    int min = arr1[0];
    int max = arr1[0];
    get_min_and_max(arr1,7,&min,&max);
    cout << "The smallest number is: " << min<< endl;
    cout << "The hoghest number is: " <<max << endl;



}