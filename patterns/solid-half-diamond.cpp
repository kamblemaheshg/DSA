#include <iostream>
using namespace std;

int main() {
  cout << "Solid Half Diamond" << endl;
  int n = 9;
  for(int i = 0 ; i <= n ; i++){
    if(i<= ((n/2)+1)){
      for(int col = 0 ; col < i ; col++){
        cout<<"*";
      }
    }
    else{
      for(int col = 0 ; col < n-i+1 ; col++){
        cout<<"*";
      }
    }
    cout<<endl;
  }
  return 0;
}