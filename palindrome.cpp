/* Program to check if a number is palindrome */

#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/* Function prototype */
bool palindrome(int);

/* Begining of the main method */
int main(int argc, const char *argv[])
{
  /* Variable declarations */
  int num;

  /* Get the input */
  cout<<"\nEnter number : ";
  cin>>num;
  cout<<endl<<"\t VECTOR STATUS ";

  /* Call the function and print the result */
  palindrome(num) ? cout<<"\nThe number is a palindrome \n": cout<<"\nThe number is not a palindrome \n"<<endl;

  return 0;
}

/* Function definition */
bool palindrome(int x) {
  vector<int> a;
  int rem,flag=1;

  while(x > 0) {
    rem = x%10;
    a.push_back(rem);
    x /= 10;
  }

  int size = a.size();
  cout<<"\n\nSize = "<<size<<"\nSize/2 = "<<size/2<<endl<<endl;

  /* Display the content of the vector */
  cout<<"\nContents pushed into the vector : ";
  for(int i=0; i<size; i++)
    cout<<" "<<a[i];
  cout<<endl<<endl;

  for(int i=0,j=size-1; i<=size/2,j>=size/2; i++,j--) {
    /* Debug Statement */
    cout<<"a["<<i<<"] = "<<a[i]<<"\t\t"<<"a["<<j<<"] = "<<a[j]<<endl;

    if(a[i] != a[j]) //Condition if not a palindrome
    {
      flag = 0;     // unset the flag
      break;
    }
  }

  return (flag != 0) ? true : false;
}
