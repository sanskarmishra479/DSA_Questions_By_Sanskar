#include<iostream>
using namespace std;
void find(int arr[], int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    for(int i=0;i<size;i++){
        ans = ans^i;
    }
    cout<<"Duplicate number is: "<<ans<<endl;
}
int main(){

    int arr[5] = {1,2,3,4,3};
    find(arr,5);


    return 0;
}