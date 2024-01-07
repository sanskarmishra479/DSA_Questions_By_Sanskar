#include<iostream>
using namespace std;
int Search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main(){

    int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    int brr[9] = {1,3,5,7,9,11,13,15,17};

    int index1 = Search(arr, 10 , 16);
    int index2 = Search(brr , 9 , 3);

    cout<<"The index of 16 is: "<<index1<<endl;
    cout<<"The index of 3 is: "<<index2<<endl;

    return 0;
}