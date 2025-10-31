#include <iostream>
#include <string>

int main()
{
    // This is a comment
    /* This is a 
    multiline comment*/

    std::cout << "Hello, World!\n";

    int a; //Not initalised, takes the value in the memory 
    a = 12;
    int b = 1; 
    double d{12.593}; // c++11 Uniform initialization. 
    
    int c{d};
    int e = c*d;
    std::cout << a << "\n";
    std::cout << e << "\n";
    std::cout << c << "\n";

    std::string msg {"Hello"};
    std::cout << msg << "\n";

    const double g{5.9};
    std::cout << g << "\n";
    int f{12};
    std::cout << f << "\n";

}