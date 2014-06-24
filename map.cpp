//Program to demonstrate the working of map data structure //

#include <iostream>
#include <list>
#include <map>

using namespace std;

int main() {
  map<string , int > m;                        //Declaring a map container 

   m["Sunday"] = 1;

    cout<<m["Sunday"]<<endl;

  return 0;
}
