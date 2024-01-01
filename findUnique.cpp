#include<iostream>
using namespace std;
void find(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    cout<<"Unique element is: "<< ans << endl;
}
int main(){

    int arr[5] = {3,4,3,4,1};
    find(arr,5);

    return 0;
}