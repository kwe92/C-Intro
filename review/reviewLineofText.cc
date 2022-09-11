// # 
//  - a line beginning with # is processed before the C++ code is compiled


// #include;
//      - Include the contents of a file, module or library
//      - Similar to import in Dart and Python

//<iostream>
//  - iostream must be included in any program that outputs data to the screen or
//    inputs data from a keyboard using C++ style streaming input/output

// <<
//  - Stream insertion operator

#include <iostream> // Process this line and include the contents of the passed file before C++ code is compiled and the main function called

// The main function
//  - Must be part of every C++ program
//  - Even if main is not the first function in the program it wil lbe the first to execute
// In C++ main returns a value instead of being void
int main(){
    // namespace::name syntax
    
    // Stream input/Output
    // String literals are known as streams of characters
    // This stream of characters is sent to the Standard Output Stream Object
    std::cout << "Welcome to C++, this will be a arduous, fustrating and rewarding experience!"; 
    return 0;

    // Statement Terminator
    // - semicolon ;
    //      - like SQL and Dart
}



