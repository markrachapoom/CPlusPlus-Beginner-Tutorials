/*

 Episode 9: Vector
 
 Vector is very convenience in term of collecting data without ordering
 Vector is a danymic size array
 
 [ Declaring Vector (What you need before using vector) ]
 
 1 ) #include <vector>
 2 ) its namespace is std::
 3 ) vector<int> array;
 4 ) vector<char> array;
 5 ) vector<data type> array;
 
 */

#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> array1{1, 2, 3, 4};
    std::cout << array1[0] << std::endl; // Output: 1
    std::cout << array1.at(3) << std::endl; // Output: 4
    
    
    // Find out how many elements in a vector
    // We use .size() after the vector name
    std::cout << array1.size() << std::endl; // Output: 4
    
    
    // Adding number to the very back of a list
    // now we have {1, 2, 3, 4}
    array1.push_back(5); // {1, 2, 3, 4, 5}
    
    
    // Deleting number from the back of a list
    array1.pop_back(); // {1, 2, 3, 4}
    
    
    // Sorting a list
    std::sort(array1.begin(), array1.end());
    
    // Reversing a list
    std::reverse(array1.begin(), array1.end());
    
    // Copy a list from an existing list
    std::vector<int> array_copied = array1;
    
}

