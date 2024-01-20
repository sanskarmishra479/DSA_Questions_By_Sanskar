#include<iostream>
using namespace std;
bool IsPossible(int arr[], int n, int m, int mid){
    // n = num of books , m = num of student.
    int studentCount = 1;
    int pagesum = 0;

    for(int i=0; i<n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > m){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int BinarySearch(int arr[], int n, int m){

    int start = 0;
    int ArrSum = 0;
    for(int i=0; i<n; i++){
        ArrSum += arr[i];
    }

    int end = ArrSum;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(IsPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){

    int arr[4] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    int ans = BinarySearch(arr, n, m);
    cout<<ans<<endl;

    return 0;    
}