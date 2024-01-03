#include<iostream>
using namespace std;
void N(int arr[],int n, int brr[], int m){
    int i = 0 , j = 0;
    while(i<n && j<m){
        if(arr[i] == brr[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i] < brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
int main(){
    int n  = 5;
    int m = 4;
    int arr[5] = {1,2,3,4,5};
    int brr[4] = {1,2,7,6};

    N(arr,5,brr,4);

    return 0;
}