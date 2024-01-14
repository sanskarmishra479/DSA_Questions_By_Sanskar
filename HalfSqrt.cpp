#include<iostream>
using namespace std;
long long int BinarySearch(int num){
    int start = 0;
    int end = num;
    long long int mid = start + (end-start)/2;
    long long int ans = -1;

    while(start<=end){

        long long int sqr = mid*mid;
        if(sqr == num){
            ans = mid;
            return ans;
        }
        else if(sqr < num){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int ans = BinarySearch(num);
    cout<<"Squre root of number is: "<< ans <<endl;


    return 0;
}