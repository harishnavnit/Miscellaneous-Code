#include <iostream>
#include <cstdlib>

using namespace std;

class Max_Heap {
private:
  /* Private memebers */
  static const int max_size = 10;
  vector<int> data[max_size];
  
public:
  /* Constructors */
  Max_Heap(
    typename vector<int>::iterator first,
    typename vector<int>::iterator last
  );
  
  void heapify_up();
  void heapify_down();
  void make_heap();
};

/***********************************************************/
void Max_Heap::heapify_up(size_t index) {
  
  static int flag_1 = 0, flag_2 = 0;
  
  assert(index <= heap_size);
  
  size_t left = (index << 1);		//Left = 2 * index
  size_t right = (index << 1) + 1;	//Right = (2 * index) + 1
  size_t largest = index;
  
  if((left <= heap_size) && (data[left] > data[largest]) {
    largest = left;	//Update the index/largest
  }
  
  if((right <= heap_size) && (data[right] > data[largest])) {
    largest = right;		//Update the index/largest
  }
  
  if((flag_1 == 1) || (flag_2 == 1) || (largest != index)) {
    swap(data[largest], data[index]);
    heapify_down(largest);
  }
}

void Max_Heap::make_heap() {
  if(data.size() < 1) return;
     else {
       for(size_t i = (data.size()/2); i >= 1; i--) {
	 heapify_down(i);
      }
    }
}

/************************************************************************/
int main() {
  Max_Heap h;
  
}