#include <iostream>
using namespace std ;

int main(){
    //int LuckyNums[5]={2,3,5,7,10};
    int nums[5];
    /*for (int i = 0; i < 5; i++)
    {
        cout<<&LuckyNums[i]<<endl;
    }*/
   for (int i = 0; i <= 4; i++)
   {
    cout<<"Number: ";
    cin>>nums[i];
   }
    for (int i = 0; i <= 4; i++){
        cout<<*(nums +i)<<" ";
    }
   
    
    
}