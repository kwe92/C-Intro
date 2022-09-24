// C++ Structures

//  - Also known as "Structs"
//  - A way to group related variables in one place
//  - Each variable within a defined structure is considered a "member"
//    of that structure
//  - Member variables of a struct can be of any type
//    unlike elements within an array that are homogeneous
//  - Kind of like a non-homogeneous array
//  - personal opinon: structs feel like public classes without methods

#include <iostream>
using namespace std;

// Create Unamed Structs && Accessing Struct Member Variables

//  - Unamed structs are defined
//    then declared and initalized with a variable suffixing the struct body
//  - Member variables of a structure are public and can be accesed and modified 
//    with the member access dot . notation syntax like public classes
//  - NOTE: structs can be defined inside the main function or Globally (accessed bythe entire program)

struct {
string someString;
int someInteger;
} MyStruct1;

int main(){
    MyStruct1.someString = "Colt";
    MyStruct1.someInteger = 45;

    cout << MyStruct1.someString << " " << MyStruct1.someInteger << " and two zig zags.." << endl;
    return 0;
}

