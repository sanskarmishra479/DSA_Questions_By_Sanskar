#include <iostream>
using namespace std;
void FindElement(int arr[], int n)
{
  int find;
  cout<<"enter the element to find: ";
  cin>>find;
  for(int i=0;i<n;i++)
    {
      if(arr[i]==find)
      {
        cout<<"element found at index "<<i<<endl;
        break;
      }
    }
}
int main(){
  int size;
  cout<<"enter the size of array: ";
  cin>>size;
  int num[10];
  for(int i=0; i<size; i++)
    {
      cin>>num[i];
    }
  FindElement(num, size);
  
}