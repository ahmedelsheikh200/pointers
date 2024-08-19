#include <iostream>
using namespace std;

// Function to increment the value, but passed by value
int  increment(int value) {
    int new_value = value++; // Increment the local copy of the value
    return  new_value ;
}

int main() {
    int value = 10;
    cout << "Before increment: " << value << endl;

    int a = increment(value); // Pass the value (not a pointer)

    cout << "After increment: " << a << endl; // value remains unchanged

    int arr [3]= {1,4,5};
    arr[1]=7;
    for (int i = 0; i < 3 ; i++)
    {
        cout << arr[i] << endl;
    }
    
    

    return 0;
}
