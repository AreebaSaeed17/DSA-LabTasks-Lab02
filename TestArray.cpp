#include<iostream>
#include<assert.h>
using namespace std;

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



bool isSorted(const int* arr, const int size){

}