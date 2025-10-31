#include <iostream>
int main()
{
    // This is a comment
    /* This is a 
    multiline comment*/

    std::cout << "Hello, World!\n";

    int a; //Not initalised, takes the value in the memory 
    a = 12;
    int b = 1; 
    int c(13); 
    double d{12.593}; // c++11 Uniform initialization. 
    
    int e = c*d;
    std::cout << a << "\n";
    std::cout << e << "\n";

}