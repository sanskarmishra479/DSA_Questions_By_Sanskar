#include<iostream>
using namespace std;
int Pivot(int arr[], int size){
    int start = 0 , end = size-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start) / 2;
    }
    return start;
}
BinarySearch(int arr[], int s, int e, int key){
    int start = s , end = e;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start+(end - start) / 2;
    }
    return -1;
}
int RotatedSearch(int arr[], int size, int Pivot, int key){
    if(arr[0] <= key && key>=Pivot-1){
        return BinarySearch(arr, 0 , Pivot-1, 5);
    }
    else{
        return BinarySearch(arr, Pivot , size-1, 5);
    }
}
int main(){
    
    int arr[10] = { 10, 9, 8, 1, 2, 3, 4, 5, 6, 7};
    int PivotEle = Pivot(arr, 10);
    int ans = RotatedSearch(arr, 10, PivotEle, 5);

    cout<<"Index of key is: "<< ans;

    return 0;
}