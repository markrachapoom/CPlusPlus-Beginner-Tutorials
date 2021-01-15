// Episode 8: Conditions

/*
 It's pretty straight forward in this episode
 
 What you'll know from this: if...else statement and Condition Operator ("?")
 
 -----------------------------------------------------------------------------
 
 IF...ELSE STATEMENT
 
 if something happend
    Do this
 else something does not happen
    Do this instead
 
 it's easy right??? seems like it's a common sense rather than a technical coding
 
 -----------------------------------------------------------------------------
 
 TERNARY OPERATOR OR '?'
 
 condition ? do this : do that
 
 How to read...
 Is condition true? if yes, do this; if not, do that
 
 -----------------------------------------------------------------------------
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    
    int grade = 80;
    
    // Control Flows
    if (grade >= 60) {          // If score is greater than or equals 60
        cout << "Passed\n";       // Do this!
    } else {                    // If not...
        cout << "Failed...\n";    // Do this instead...
    }
    
    // Ternary Operator
    grade >= 60 ? cout << "You are passed!\n\n" : cout << "You are failed..."; // Method 1
    cout << (grade >= 60 ? "You are passed!\n\n" : "You are failed...\n"); // Method 2
    
    return 0;
}



