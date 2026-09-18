// this program reverses the string given by the user
#include <iostream>
#include<string.h>
#include<utility>
using namespace std;


void StringReversal(){

    // dynamically allocating memory for the string
    string *Str = new string() ;

    // taking user input
    cout << "Enter the string of your choice to reverse it.\n";
    getline(cin, *Str);

    // getting size of the string that the user actually used
    int size = Str->length();

    // running a loop to swap the characters of the string
    //for(int i =  0; i<(size/2); i++){
   //     swap(*Str[i], *Str[size-i-1] );
    //}

    // printing the reversed string
    cout<<"Following is the reversed string: \n";
    cout<<*Str;

}

int main()
{
    StringReversal();
}

