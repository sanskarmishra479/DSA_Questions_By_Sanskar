#include<iostream>
using namespace std;
int First(int arr[], int size, int key){
    int start = 0; 
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int Last(int arr[], int size, int key){
    int start = 0; 
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){

    int arr[10] = {2,4,6,6,6,6,6,8,10,12};
    int Firstindex = First(arr, 10, 6);
    int Lastindex = Last(arr, 10, 6);

    cout<<"First OCC of 6 at index: "<<Firstindex<<endl;
    cout<<"Last occ of 6 at index: "<<Lastindex<<endl;

    return 0;
}