#include <iostream>
using namespace std;
bool FindElement(int arr[], int n)
{
  int find;
  cout<<"enter the element to find: ";
  cin>>find;
  for(int i=0;i<n;i++)
    {
      if(arr[i]==find)
      {
        return 1;
      }
    }
    return 0;
}
int main(){
  int size;
  cout << "enter the size of array";
  cin >> size;
  int num[10] = {3,1,2,4,6,5,7,9,8,10};
  bool found = FindElement(num, size);
  if(found){
    cout << "Element is Present" << endl;
  }
  else{
    cout << "Element is not Present" << endl;
  }
}