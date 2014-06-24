/*Basic Program to implement a queue data structure using arrays */

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <stdexcept>

#define MAX 10

using namespace std;

class myQueue {
private :
  int front;		//Holds the front element of the queue
  int rear;		//Holds the last element of the queue
  int _size;		//Holds the size of the queue
  
  int data[MAX];	//Array to hold the elements of the queue
  
public :
  /*Constructors */
  myQueue() : front(0),rear(0),_size(0) { }		//Default Constructors
  
  /*Getter Functions */
  int getFront() {
    return front;
  }
  int getRear() {
    return rear;
  }
  
  /*Function to check if the queue is empty */
  bool empty() {
    return (front == -1);
  }
  /*Setter Functions */
  /*Function that returns the size of the queue */
  int size() {
    _size = rear+1;
    return _size;
  }
  
  /*Function that pushes elements on the queue */
  void push(int d) {
      /*Check if the queue is empty */
      if(empty()) {
	cout<<"\nThe Queue is empty ! ";
	cout<<"\nInserting "<<d<<" on to the queue\n";
	
	data[0] = d;			//Push element to the rear
	++rear;				//Update rear
      }
      
      /*If the queue contains elements */
      else {
	data[_size] = d;
	++rear;
      }
  }
  
  /*Function that pops an element from the queue */
  void pop() {
    
    /*Check if the queue is empty */
    if(empty()) {
      cout<<"\nThe queue is empty ! Nothing to pop ~ "<<endl;
    }
    
    /*If the queue is not empty */
    else {
      data[0] = 0;
      ++front;			//Update the front 
    }
  }
  
  /*Function to the content of the queue */
  void print() {
    cout<<"\nThe queue contains the following elements \n";
    for(int i=front;i<rear;i++)
      cout<<data[i]<<endl;
  }
};

/*Begining of the driver class */
int main() {
  
  myQueue q;
  
  q.push(10),q.push(20),q.push(30),q.push(40),q.push(50);
  q.print();
  q.pop();
  q.print();
  
  return 0;
}