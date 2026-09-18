// this program shows the working of a ptr using the analyze ptr function
#include <iostream>

// this will receive a ptr and print the following data

void analyze_pointer(int *ptr){

	// write the memory address of the ptr to the console
	std::cout << &ptr<<std::endl;

	//write value of integer the pointer points to 
	std::cout << *ptr<<std::endl;
}

int main()
{
	// allocating an int on stack
    // testv has been declared and assigned a value
	int testv = 100;

	// passing address of the int variable to the function
    std::cout<<"Values for 1st call of function"<<std::endl;
	analyze_pointer(&testv);        

	// allocating int on heap
	int *heapv = new int();
    // assigning it value
    *heapv = 1500;

	// passing the heap variable address to function
    std::cout<<"Values for 2nd call of function: "<<std::endl;
	analyze_pointer(heapv);

}
