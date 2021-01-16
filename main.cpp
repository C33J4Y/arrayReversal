#include <iostream>

using namespace std;

int* arrayReversal(int n, int array[]){

 

   static int a[4];
   int temp;

  for (int k = 0; k < n; k++){
    a[k] =  array[k];
  } 

  //Reversal Algorithm
  for (int i = 0; i < n/2; i++){
    temp = a[n-i-1];
    a[n-i-1] = a[i];
    a[i] = temp;

  }

  for (int j = 0; j < n; j++){
    cout << a[j] << endl;
  }

  return a;

}

int main() {

  int n = 5;
  int a[5] = {4,3,2,1,5};
  
  arrayReversal(n, a);
}