#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int swapAlternate(int arr[], int size){
    int ans = 0;
    for(int i=0; i<(size-1); i+=2){
        swap(arr[i], arr[i+1]);
    }
    return ans;
}
int main(){

    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1,2,3,4,5,6};

    swapAlternate(arr,5);
    printArr(arr,5);

    swapAlternate(brr,6);
    printArr(brr,6);


    return 0;
}
