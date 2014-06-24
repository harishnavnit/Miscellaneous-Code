/*Program to use a stack as a paranthesis matcher
 *
 * Will require the implementation of a generic 
 * stack that can be attained through the use 
 * of class templates etc.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stdexcept>

using namespace std;

/*Listing for class stack */
class stack {
private :
  int top;			//Holds the top of the stack 
  int _size;			//Holds the size of the stack
  
private :
  /*Constructors */
  stack() : top(0) , _size(0) { }	//Default Constructors
  
  /*Getter Functions */
  int getTop() {
    return top;
  }

  /*Function that returns the size of the stack */
  int size() {
    _size = top + 1;
    return _size;
  }
  
  /*Function to check if the stack is empty */
  bool empty() {
    return (top == -1);
  }
  
  /*Function to push elements on to the stack */
  void push(int d);
};
