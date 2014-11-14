/*Program to perform binary search on an array of integers */

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

/*Function prototype */
int binary_search(int [], int, int);

/* Begining of the driver function a.k.a main() */
int main(int argc, char const* argv[])
{
    int arr[10], size, key;

    cout<<"\nEnter the size of the array : ";
    cin>>size;
    cout<<"\nEnter the elements of the array : ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<"\nEnter the element to be searched for : ";
    cin>>key;

    int index = binary_search(arr, size, key);   //function call

    cout<<"\nElement found at index "<< index + 1 <<" \n";
    cout<<endl<<endl;

    return EXIT_SUCCESS;
}

/* Function definition */
int binary_search(int a[10], int size, int key) {

    int found_index;

    for(int i=0; i<size; i++) {
        if(a[i] == key) {
            found_index = i;
            break;
        }
    }

    return found_index;
}
