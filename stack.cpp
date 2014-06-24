/*Program to implement a Stack using an array */

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

#define MAX 10

using namespace std;

class stack {
private :
 //int size; 			//holds the size of the stack
  int top;			//holds the top of the stack
  int data[MAX]; 		//Array to contain the elements of the stack
  
public :
  /*Constructors */
  stack() : top(0) { } 	//Default Constructors
  
  /*Getter Functions */
  //int getSize() {
    //return size;
  //}
  
  /*Setter Functions */
	  /*Nothing  that I can remember of ... */
	  
  /*Function to check if the stack is empty */
      bool empty() {
	return (top==-1);
      }
      
  /*Function to get the size of the stack */
  int size() {
    return top+1;
  }
  
  /*Function to push elements to the stack */
  void push(int d) {
    /*Check if the stack is empty */
      if(empty()) {
	cout<<"\nEmpty stack ! \nPushing "<<d<<" on to the stack"<<endl;
	
	data[0] = d; ++top;
      }
      
      /*If the stack contains elements */
      else {
	
	int _size=size();
	getchar();
	data[_size]=d;
	++top;
      }
  }
  
  /*Function to pop elements from the stack */
  void pop() {
    /*Check if the stack is empty */
    if(empty()) 
      cout<<"\nStack Underflow ! \nUnable to pop"<<endl;
    
    /*If the stack is not empty 
     *i.e Contains elements ready to be popped 
     */ 
    else {
      int _size=size();
      data[_size] = 0;
      --top;
    }
  }
  
  /*Function to print the elements of the stack */
  void print() {
    cout<<"\n\t\tThe stack contains ... \n\n";
    for(int i=0;i<top;i++)
    {
      cout<<data[i]<<endl;
    }
  }
};

int main() {
  stack s;
  getchar();
  s.push(10),s.push(20),s.push(30); 		//Pushing elements to the stack
  s.print();					//Printing the stack elements
  s.pop();
  s.print();
  
  return 0;
}