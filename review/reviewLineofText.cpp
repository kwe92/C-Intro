// # 
//  - a line beginning with # is processed before the C++ code is compiled


// #include;
//      - Include the contents of a file, module or library
//      - Similar to import in Dart and Python

//<iostream>
//  - iostream must be included in any program that outputs data to the screen or
//    inputs data from a keyboard using C++ style streaming input/output

// <<
//  - is known as thw Stream insertion operator

#include <iostream> // Process this line and include the contents of the passed file before C++ code is compiled and the main function called

// The main function
//  - Must be part of every C++ program
//  - Even if main is not the first function in the program it wil lbe the first to execute
// In C++ main returns a value instead of being void
int main(){
    // namespace::name syntax
    
    // Stream input/Output
    //  - String literals are known as streams of characters
    //  - This stream of characters is sent to the Standard Output Stream Object
    //  - BEST PRACTICE 1.5: string literals should end with a \n to position the cursor on a new line 
    
    std::cout << "Welcome to C++, this will be a arduous, fustrating and rewarding experience! \n"; 
    
    // Indicates that the program ended successfully and is REQUIRED in every main function
    // A value of 0 is used for sucessful termination of a C++ program
    return 0;

    // Statement Terminator
    // - semicolon ;
    //      - like SQL and Dart
}



