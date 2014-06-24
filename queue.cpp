/*Program to implement a Queue data structure */

/*A Queue is a data structure in which insertion takes place at the rear 
 * and pop operation takes place at the front 
 * The operations for a queue are mainly push,pop at the rear and front respectively 
 */

#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <string>

#define MAX 10

using namespace std;

/*Queue class begins */
class queue {
  private :
    size_t front,rear;
    int data[MAX];

  public :
    /*Constructors */
    queue() : front(NULL),rear(NULL) { }        //Default Constructor 
    
    /*Getter Functions */
      int getFront() { return front; }                 //Returns the front
      int getRear() { return rear; }                   //Returns the rear

    /*Setter Functions */
      void setFront(int i) {front = data[i]; }         //Sets the front to a position in the array
      void setRear(int i) {rear = data[i]; }           //Sets the rear to a position in the array

    /*Checking if the queue is empty */
      bool empty() {
        return (front==rear==0);
      }

    /*Function to get the size of the queue */
    //size_t size() {
      //return rear+1;
    //}
    
    /*Push elements in the queue */
      void push(int d) {
        
        /*Check if the queue is full */
        if(data.size()==MAX-1) cout<<"\nQueue Overflow ! Insertion not possible"<<endl;

        /*If Not full */
        else {
                data[data.size()+1] = d;                //Inserting the data to the end of the array 
                rear = d;
        }
      }

    /*Function to print the contents of the queue */
      void print() {
        cout<<endl;
            for(int i=0;i<data.size();i++)
              cout<<data[i]<<"\t";
      }
};

int main() {

  queue q1;

  q1.push(10),q1.push(20),q1.push(30);
  q1.print();
    return 0;
}
