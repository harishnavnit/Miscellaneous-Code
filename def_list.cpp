#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

int main() {
  
  list<int> l1;
  
  l1.push_back(10),l1.push_back(20),l1.push_back(30);
  
  list<int>::iterator iter = l1.begin();
  
  l1.insert(iter,-10);
  
  for(iter=l1.begin();iter !=l1.end();iter+=1)
    cout<<*iter<<endl;
  
  return 0;
}