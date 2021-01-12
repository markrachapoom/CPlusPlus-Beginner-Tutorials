// Episode 4: Pointers

// Understand the concept of pointers
// Pointer is like an arrow

#include <stdio.h>

int main()
{
    int x = 7; // We make the box named "x" with number 7 inside
    int y = 42; // We build the box named "y" with number 42 inside
    int * ip = &x; // This arrow names ip "pointing" to the box "x"

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);
    
    return 0;
}

/*
 Explaination from me:
 
 this line
 
 int *ip = &x;
 
 1) We created an arrow named ip pointing to the box named x
 2) Now we want a number inside the box right??
 3) Think like ip -----> [7]
 4) We need the number inside the box we use *ip
 5) That's it, easy right??
 
 */
