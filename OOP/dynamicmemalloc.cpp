#include<iostream>
using namespace std;

int main(){
int row = 5;
int col = 6;
int** arr = new int*[row];
for(int i=0 ;i<row;i++){
        arr[i]= new int[col];
    }
  for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr[i][j] = i * col + j;  // Just a sample value
            cout << arr[i][j] << " ";  // Print the array
        }
        cout << endl;
    }
 
}
