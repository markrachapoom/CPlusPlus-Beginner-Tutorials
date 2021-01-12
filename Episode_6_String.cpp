#include <iostream>
#include <string> // you can use this header to declare "string" as a datatype
using namespace std;

int main() {
    
    // String is an array of individual character
    char cstring[] = "String"; // This is similar to cstring[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'} (\0 is called NULL)
    string sentence = "Hello, my name is Mark!"; // Initializing a string
    
    
    // print out two strings
    
    cout << cstring << endl; // Output: String
    
    for (int i = 0; i < sizeof(cstring) / sizeof(char); i++)
    {
        cout << cstring[i];
    } // Output: String
    
    cout << endl << cstring[0] << cstring[1] << cstring[2] << cstring[3] << cstring[4] << cstring[5] << endl; //Output: String
    return 0;
}
