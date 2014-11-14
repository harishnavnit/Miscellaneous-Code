/* Program to check if a number is a prime number */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

/* Function prototype */
bool is_prime(int );

/* Begining of the driver function */
int main(int argc, const char *argv[])
{
  int num;

  cout<<"\nEnter number : ";
  cin>>num;

  /* Function call */
  (is_prime(num)) ? cout<<"\nEntered number is prime !\n" : cout<<"\nEntered number is NOT prime !\n";

  return 0;
}

/* Function definition */
bool is_prime(int n) {
  /* Local variable */
  int count = 0;

  /* Test loop */
  for(int i=1; i<=n; i++) {
    if(n % i == 0)
      count += 1;
  }

  return (count == 2) ? true : false;
}
