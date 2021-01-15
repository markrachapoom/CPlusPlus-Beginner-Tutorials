// Episode 7: Function

/*
 We can build a thing call function to use them as many time as you want
 through out the whole program
 
 " Here is the story... "
 If you want a person to get the stuff for you from a supermarket
 you give them a direction instead of telling them every single day how to go!
 
 You an call the function or the list of what to do for many times
 */

#include <iostream>
#include <string>

int multiply(int a, int b); // funtion prototype c read this first to know that this func exists
bool isSwitchOn(int number); // Now compiler know these function will be appeared in the main

int main(int argc, char* argv[]) { // Main is a form of function
    std::cout << multiply(4, 5) << std::endl; // calling the function // Output = 20
}

// Function name: multiply with the integer return
int multiply(int a, int b) {
    return a * b;
}

// Function name: isSwitchOn with the boolean return
bool isSwitchOn(int number) {
    if (number == 5) {
        return true;
    }
    return false;
}

/*
 
 
------------------------- Function -------------------------
 
 datatype name(datatype argument) {
    do something
    do something
    do something
    do something
 
    return something
 }
 
 1 ) Identifiers            --->    Function name
 2 ) Funtion Definintion    --->    datatype function return, like int, double, bool, string...

 */

