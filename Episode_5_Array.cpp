#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // array [  item1  |  tem2  |  item3  |  item4  |  item5  ]
    // index      0         1        2         3         4
    
    int array[5]; // Declaring an empty array contains "5" elements
    array[0] = 100; // assign item1 100
    array[1] = 200; // assign item2 200
    array[3] = 300; // assign item3 300
    array[4] = 400; // assign item4 400
    // The limit of an index is 4 because it already reach 5 elements
    
    cout << array[4] << endl; // 400
    cout << array[0] << endl << endl; // 100

    // ------------------------------------------------------------------
    
    // *array is the arrow that is pointing to the first item in array
    cout << *array << endl;         // Output: 100
    cout << *(array + 1) << endl;   // Output: 200
    cout << *(array + 3) << endl;   // Output: 300

    puts("");
    return 0;
}
