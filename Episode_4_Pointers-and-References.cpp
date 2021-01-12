// Episode 4: Pointers and Referencess


// Warning!!!!!!!!!!!!!!
// RUN THE CODE TO LEARN FROM OUTPUT OTHERWISE, YOU WILL GET CONFUSED

// Understand the concept of pointers
// Understand Reference
// "POINTERS IS AN ARROW" ------------------------>
// References is for a box sharing, or name sharing

#include <stdio.h>

int main()
{
    // RUN THIS CODE TO SEE HOW IT WORKS!!!
    
    
    int x = 7; // We make the box named "x" with number 7 inside
    int y = 42; // We build the box named "y" with number 42 inside
    printf("Box x has %d inside   x[%d]\n", x, x);
    printf("Box y has %d inside  y[%d]\n\n", y, y);
    
    // POinters
    int *ip = &x; // This arrow names ip "pointing" to the box "x"
    printf("ip ------> x[%d]\n", *ip);
    printf("*ptr is %d, star is to pull a value inside the box\n\n", *ip);
    
    // Reference
    int &ref = x;
    // The box x and ref arethe same box right now
    // the ref overlap the x box
    ref = 100;
    printf("We put the number %d inside the box ref (ref,x[100])\n", ref);
    
    printf("Box x now has %d inside\tx[%d]\n", x, x);
    printf("Box ref now has %d inside\tx[%d]\n", ref, ref);
    
    printf("^^ See?? they share te same box!!! ^^\n\n");
    
    return 0;
}

/*
 
 
------------------------- Pointer -------------------------
 
 int *ip = &x;
 
 1) We created an arrow named ip pointing to the box named x
 2) Now we want a number inside the box right??
 3) Think like ip -----> [7]
 4) We need the number inside the box we use *ip
 5) That's it, easy right??
 
 
 ------------------------- References -------------------------
 
 int &ref = x;
 
 We use & in front of a new variable refer to reference
 The line above tell the computer that ref will be using the same box as x
 
 ref,x[] like this
 
 if you say x = 1000    ref,x[1000]
 print(x) // Output: 1000
 print(1000) // Output: 1000
 
 if you say ref = 5555  ref,x[5555]
 print(x) // Output: 5555
 print(1000) // Output: 5555
 
 */
