// Episode 8: Conditions
/*
 It's pretty straight forward in this episode
 
 Pseudocode
 
 if something happend
    Do this
 else something does not happen
    Do this instead
 
 it's easy right??? seems like it's a common sense rather than a technical coding
 
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    
    int grade = 80;
    
    if (grade >= 60) {          // If score is greater than or equals 60
        cout << "Passed";       // Do this!
    } else {                    // If not...
        cout << "Failed...";    // Do this instead...
    }
    
    return 0;
}



