#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

void bubblesort(int [],int );             //Function declaration

int main() {
  int size;
  int arr[10];

  cout<<"\nEnter the size of the array : ";             //Getting the size of the array 
  cin>>size;

  cout<<"\nEnter the elements of the array : ";        //Getting the elements of the array 
  for(int i=0;i<size;i++)
    cin>>arr[i];

  cout<<"\nThe array contains : ";
  for(int i=0;i<size;i++)
      cout<<"\t"<<arr[i];

  bubblesort(arr,size);

  return 0;
}

void bubblesort(int x[10],int n) {

      for(int i=0,j=i+1;i<n-1,j<n;i++,j++) 
      {
        if(x[i] > x[j])
          swap(x[i],x[j]);
      }

      cout<<"\nArray after sorting is as follows : \n\n";
      for(int i=0;i<n;i++)
        cout<<x[i]<<"\t";

}
