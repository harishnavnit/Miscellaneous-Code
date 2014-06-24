#include "try_split.h"

#include <iostream>

using namespace std;


void try_split :: get_data() {
  cout<<"\nEnter two numbers : ";
  cin>>a>>b;

  add_int(a,b);   //Calls the function to add the numbers
}

int try_split :: add_int(int x, int y) {
  sum = x + y;
}

void try_split :: print_sum() {
  cout<<"Sum = "<< sum<<endl;
}
