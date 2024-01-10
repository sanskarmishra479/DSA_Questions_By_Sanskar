#include<iostream>
using namespace std;
int peak(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){

    int arr[5] = { 0, 10, 5 ,2 ,0};
    int peakValue = peak(arr, 5);

    cout<<"The peak value of mountain array is: "<<peakValue<<endl;

    return 0;
}