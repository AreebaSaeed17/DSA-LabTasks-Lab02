// this program reverses the string given by the user
#include <iostream>
#include<string.h>
#include<utility>
using namespace std;


void StringReversal(){

    // dynamically allocating memory for the string
    string *Str = new string() ;

    // taking user input
    cout << "Enter the string of your choice to reverse it..\n";
    // getting a full line input via getline
    getline(cin, *Str);

    // getting size of the string
    // since it is on heap it can be accessed using the ptr name so for getting length
    // i had to use ->length()
    int size = Str->length();
    
    // logic for swap
    // get the size and find the midpoint
    // i need to exchange index 0 with index 9
    // index 1 with 9 
    // index 2 with 8 and so on
    // this can be generalized as size-currentindex-1 = i mathematically
    // Ive first dereferenced each element of the string using dereferencing operator  
    // and then swapped the individual characters at the positions using the formula 

    for( int i = 0; i < size / 2; i++) {
        swap((*Str)[i], (*Str) [size-i-1] );       
    }

    // printing the reversed string
    cout<<"\n Following is the reversed string: \n";
    cout<<*Str;

    // freeing up memory
}

int main()
{
    // calling the function
    StringReversal();

}

