/*Program to illustrate the working of a Linked List */

#include <iostream>
#include <cstdlib>
#include <stdexcept>

using namespace std;

/*Definition of the node class begins */
class node {
  private :
    int data;			//Contains the data part of the node
    node* next;                 //Self-Referential Structures

  public : 
    /*Constructors */
    node() : data(0) , next(NULL) { }             //Default Constructor
    node(int d) : data(d) , next(NULL) { }        //One-Argument Constructor

    /*Getter Functions */
    int getData() {return data;}                //Function to return the data
    node* getNext() {return next;}              //Returns the reference to the node 

    /*Setter Functions */
    void setData(int d) {data = d;}             //Sets the data of the node
    void setNext(node* n) { next = n; }         //Sets links the node to the next node 

};

/*List Class begins */
class list {
  private : 
    node* head; 				//Contain the head of the linked list
    node* tail;					//Contain the tail of the linked list
    size_t _size;				//Variable to store the size of the linked list

  public :
    /*Constructors */
    list() : head(NULL) , tail(NULL) , _size(0) { }         //Default constructor

    /*Function to get the size of the Linked list */
    size_t size() {return _size;} 
    

    /*Function to check if the Linked List is empty */
    bool empty() {
      return (_size==0);
    }

    /*Function to insert an element into the Linked List */
    void push_back(int data) {

      /*Check if the List is empty */
        if(empty()) {
          node* temp = new node(data);                      //Create a new node
	  
     /*The line of code that caused the segmentation fault */	  
    //      tail->setNext(temp);                              //Set the next element of tail to temp
    
          head = tail = temp;                               //Copy the value of tail to temp
          ++_size;
        }
  
      /*If the List is not empty */
        else {
          node* temp = new node(data);
          tail->setNext(temp);
          tail = temp;
          ++_size;
        }
    }
    
/*Function to push data to the front of the List */
    void push_front(int data) {
      
      /*If the list is empty */
      if(empty()) {
          push_back(data);
      }

      /*If the list is not empty */
      else {
          node* temp = new node(data);
          temp->setNext(head);
	  
      /*The line of code that stopped push_front() from working */ 
        //  temp = head;
        
          ++_size;
      }
    }

/*Function that searches for an element in the Linked List */
    int search(int key) {
      /*Check if the linked list is empty */
	if(empty()) {cout<<"\nLinked List empty"; return -1;}
	else {
	  int pos = 1;
	  node* temp = head;
	  while(temp != NULL) {
	    if(temp->getData() == key){++pos; return pos;} 
	    temp = temp->getNext();
	  }
	}
    }
    
/*Function to delete an element from the Linked List
 * 
 *The function will call the search function and 
 * look if the element to be deleted is present in 
 * the Linked List . It will then delete the element
 * from the Linked List 
 */
   void node_delete(int data) {
     if(search(data) != -1) {
	int tp = search(data);		//Obtaining the position
	
	node* temp = head; 	//Creating a new temporary initialized to head
	
	 for(int i=0;i<tp-1;i++) 
	   temp = temp->getNext(); 	//Moving the temp to the position of interest
	
	   temp->setNext(temp->setNext(data));
      }
   }
/*Function that prints the content of the Linked List */
    void print() {

      /*Check if the node is empty */
      if(empty()) {
          cout<<"\nEmpty Linked List \n"<<endl;
      }

      /*If the List is not empty */
      else {

         node* temp = head;              //Creating a temporary node which has data "data" 

         while(temp != NULL) {
           cout<<temp->getData()<<"-->";
           temp = temp->getNext();
         }

         cout<<"NULL"<<endl;
      }
    }
};

int main() {
    list l1;

    l1.push_back(10),l1.push_back(20),l1.push_back(30);
    l1.print();
    //l1.push_front(-10); 
    //l1.print();
    l1.push_back(50);
    l1.print();
    int p = l1.search(20);
    cout<<"\nElement Found at position : "<<p+1<<endl;

    return 0;
}
