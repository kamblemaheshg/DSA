#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &v){
  int n = v.size();

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n - i -1 ; j++){
      if(v[j]>v[j+1]){
        swap(v[j],v[j+1]);
      }
    }
  }

}

void selectionSort(vector<int> &v){
  int n = v.size();

  for(int i = 0 ; i < n ; i++){
    int minIndex = i;
    for(int j = i+1 ; j < n ; j++){
      if(v[j] < v[minIndex]){
        minIndex = j;
      }
    }
    swap(v[i],v[minIndex]);
  }

}

void insertionSort(vector<int> &v){
  int n = v.size();

  for(int i = 1 ; i < n ; i++){
    int key =v[i];
    int j = i-1;
    while(i>=0 && v[j] > key ){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
  }

}


int main() {
  vector<int> str = {11,55,77,2,1,3,4,5,4,5};
  insertionSort(str);
  int mnum = min(9,10);
  cout << mnum << endl;
  for(auto i : str){
    cout << i << " ";
  }
  return 0;
}