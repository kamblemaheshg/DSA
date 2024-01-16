#include <iostream>
using namespace std;

int main() {
  int n = 6;
  for(int i = 1 ; i<n ; i++){
    for(int j = 1 ; j <=i ; j++){
      if(j == 1 || j == i || i == n-5) {
        cout << j << " "; 
      }
      else{
        cout << " " ;
      }
    }
    cout<<endl;
  }
  return 0;
}