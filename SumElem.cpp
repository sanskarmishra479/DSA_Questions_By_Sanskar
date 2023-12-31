#include<iostream>
using namespace std;
void sumElem( int arr[], int size){
  int sum = 0;
  for(int i=0; i<size; i++){
    sum = sum + arr[i];
    }
    cout<<"here is the sum of the elements which is present in array: "<< sum <<endl;
}
int main(){
    int arr[5] = {3 , 7 , -2 , 5 , -13};
    int size = 5;
    sumElem(arr, size);

    return 0;
}