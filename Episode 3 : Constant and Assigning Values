/*
 
 Episode 3 : Constant and Assigning Values
 
 Variable (more to know):
 - Variables can be changed at runtime (runtime = when the program is running)
 - After a variable has been declared, we can assign a new value to it at any point in our code
 - "A value that is subject to change"
 
 */

#include <iostream>

// Variable Declaration
int main(){
    
    int variable = 120;
    int a = 5;
    int b = 4;
    
    const int m = 4; // const = constant (The value can't be changed!, no matter what!!)
    
    int sum = a + b + variable;
    int product = a * b * variable; // Product = 2400
    
    product = 100; // Now value in product has changed from 2400 to 100
    
    std::cout << product << std::endl; // 100
    
    // This will print The sum : 129, The product 2400
    
    return 0;
}


/*
--------------------------------------------------------------------------
 
                            Part 1 : Assigning Value
 
 Assigning values to variables:
 - We can't assign a value before a declaration, The compiler will not allow that
 
    For example:
 
            int a = 50; // Declaration
            a = 34; // Assigning
 
    You can't do this:
 
            a = 50; // Assigning
            int a = 50; // Declaration
 
 --------------------------------------------------------------------------
 
                            Part 2 : Assigning Values (2)
 
 Changing a value inside the variable
 
            int a = 100;    ---->   a is now 100
 
            a = 50          ---->   a is now 50
 
            a = 30          ---->   a is now 30
            
            std::cout << a  ---->   The output is 30
 
 --------------------------------------------------------------------------
                            Part 3 : Constant

we use "const" to declare a constant
 

            const int a = 100;    ---->   a is now 100

            a = 50                ---->   A compiler will throw you an error
 
 
 That's mean you can not change it, just use it
 Think like pie value 3.14159.... you can not change the value of pie!

--------------------------------------------------------------------------
 
                            Summary
 
        - Assignment Operator : =
        - We can assign values to variables like: a = 4
        - Cannot assign before a variable has been declared!
        - const keyword to mark your variables as constant
        - The compiler will protect "const" variables!

 */
