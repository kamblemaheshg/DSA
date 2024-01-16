#include <iostream>
using namespace std;

int main() {
  cout << "Numeric Hollow Inverted Half Pyramd" << endl;
  int n = 5;
  // row
  for(int row = 0 ;  row < n ; row++ ){
    // column
    for(int col = row ; col < n ; col ++){
      if(row == 0 || col  == n-1  || col==row){
        cout << col+1 << " "; 
      }
      else{
        cout << " ";
      }
    }
    cout<<endl;
  }
  return 0;
}