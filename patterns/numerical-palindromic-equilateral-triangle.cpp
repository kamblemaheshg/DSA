#include <iostream>
using namespace std;

int main() {
  cout << "Numerical Palindromic Equilateral Triangle" << endl;
  int n = 5;
  for(int row = 0 ; row < n ; row++){
    int k = row;
    int c=1;
    for(int col = 0 ; col < n ; col++){
        if(col < n-row-1){
          cout<<" ";
        }
        else{
          cout<<c++;
        }
    }
    for(int m = k ; m>0  ; m--){
      cout << m;
    }
    cout<<endl;
  }
  return 0;
}