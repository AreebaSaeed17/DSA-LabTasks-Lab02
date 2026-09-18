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

assert(result == true);
}

// test case 3
void test_Duplicate_Array() {
int arr[] = {2,9,7,2,0};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 4
void test_RecurringPattern_Array() {
int arr[] = {9,2,9,2,9};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 5
void test_OnElement_Array() {
int arr[] = {2};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 6
void test_DescendingSorted_Array() {
int arr[] = {10,9,8,7,6};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 7
void test_NegElements_Array() {
int arr[] = {-2,-8,-3,-6,-8};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 8
void test_AllElementsSame_Array() {
int arr[] = {10,9,8,7,6};

bool result = isSorted(arr, 5);

assert(result == true);
}

// test case 9
void testEmptyArray() {
int arr[] = {};

bool result = isSorted(arr, 5);

assert(result == true);
}


// the core logic function
// receive ptr to an array and its size
// compare the elements to make sure its arranged in an ascending order
bool isSorted(const int* arr, const int size){
    
    bool istrue = true;
    // this loop traverses the array and checks the order
    for(int i=0; i< size; i++){

        if( arr[i]<arr[i+1] ) {
            istrue = true;
        }

        else{
            istrue = false;
        }
    }
    // checking final value of the bool before returning result
    if(!istrue){
        return false;
    }
    // to cater for the overall return of the function as it is of bool type
    return true;
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