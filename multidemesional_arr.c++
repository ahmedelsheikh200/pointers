#include<iostream>
using namespace std;

int main(){
    int rows , cols ;
    cout <<"rows , columns: ";
    cin>> rows >> cols;
     // Dynamically allocate a 2D array (table)
     int **table = new int *[rows];
     for (int i = 0; i < rows; i++)
     {
        table[i]= new int[cols];
     }
     // Fill the table with user input
     for (int  i = 0; i < rows; i++){
           for (int j = 0; j < cols; j++){
                  cout << "table[" << i << "][" << j << "]: ";
                  cin>>table[i][j];
           }
      
     }
      for (int  i = 0; i < rows; i++){
          for (int j = 0; j < cols; j++){
                cout<<table[i][j]<<" ";
           }
          cout << endl;  // Move to the next line after printing each row

                 
     }
     // Free the allocated memory
     for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;
     
}
