#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

void Reverse_Arr(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5] = {2,4,6,9,-8};
    int brr[6] = {4,-2,-6,9,1,7};

    Reverse_Arr(arr, 5);
    Reverse_Arr(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}