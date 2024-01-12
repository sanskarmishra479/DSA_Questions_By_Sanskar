#include<iostream>
using namespace std;
int Pivot(int arr[], int size){
    int start=0,end = size-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){

    int arr[10]  = { 10, 9, 8, 1, 2, 3, 4, 5, 6, 7};
    int PivotIndex = Pivot(arr, 10);

    cout<<"Pivot element is: "<<PivotIndex<<endl;

    return 0;
}