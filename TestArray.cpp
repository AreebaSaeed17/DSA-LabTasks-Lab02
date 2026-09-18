#include<iostream>
#include<assert.h>
using namespace std;

// declaring the isSorted function 
bool isSorted(const int* arr, const int size);

                                                // IMPLEMENTING TEST CASES

// test case 1                                              
void test_Sorted_Array() {
int arr[] = {1,2,3,4,5};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 2
void test_UnSorted_Array() {
int arr[] = {2,9,7,1,0};

bool result = isSorted(arr, 5);

assert(result == false);
}

// test case 3
void test_Duplicate_Array() {
int arr[] = {2,9,7,2,0};

bool result = isSorted(arr, 5);

assert(result == false);
}

// test case 4
void test_RecurringPattern_Array() {
int arr[] = {9,2,9,2,9};

bool result = isSorted(arr, 5);

assert(result == false);
}

// test case 5
// by default this has to be considered sorted
void test_OnElement_Array() {
int arr[] = {2};

bool result = isSorted(arr, 1);

assert(result == true);
}

// test case 6
void test_DescendingSorted_Array() {
int arr[] = {10,9,8,7,6};

bool result = isSorted(arr, 5);

assert(result == false);
}

// test case 7
void test_NegElements_Array() {
int arr[] = {-2,-8,-3,-6,-8};

bool result = isSorted(arr, 5);

assert(result == false);
}

// test case 8
// considered sorted by default
void test_AllElementsSame_Array() {
int arr[] = {6,6,6,6,6};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 9
void testEmptyArray() {
int arr[] = {};

bool result = isSorted(arr, 0);

assert(result == true);
}

                                            // FUNCTIONS        

// receive ptr to an array and its size
// compare the elements to make sure its arranged in an ascending order
bool isSorted(const int* arr, const int size){
    
    bool istrue = true;
    
    // handle any empty array 
    // handle any array with 1 element only
  
    if(size <= 1){
         std::cout<<" There aren't enough elements in the array to be checked.\n";
         std::cout<<"The array is considered sorted according to C++ rules.\n";
          return false;
    }

    // run the loop for non empty arrays
    else{

        for(int i=0; i< (size-1); i++){    
        // loop stops at size-1 as last element has nothing to be compared against

        if( arr[i]>arr[i+1] ) {
            istrue = false;         // end the program as soon as there's one misplaced element
            std::cout<<" This array is not sorted.\n";
            return false;
           
        }
        else{
            istrue = true;
        }
    }
    }
    
    // checking final value of the bool before returning result
    if(!istrue){
        std::cout<<"Array isnt sorted.";
        return false;
        
    }
    // to cater for the overall return of the function as it is of bool type
    return true;
    std::cout<<"Sorted.";
}

int main(){
    
    test_Sorted_Array();
    test_UnSorted_Array();
    test_Duplicate_Array();
    test_RecurringPattern_Array();
    test_OnElement_Array();
    test_DescendingSorted_Array();
    test_NegElements_Array();
    test_AllElementsSame_Array();
    testEmptyArray();

    cout << "All tests passed!" << endl;

    return 0;
}