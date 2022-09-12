// Add Two Numbers

#include <iostream> // Line ran before the program is compiled
using namespace std; // similar to importing from dart and python, allows for shorter syntax

int main(){
    int input1, input2, sum; // integer variables
    cout << "Input a number\n"; // similar to stdout.write() or print
    cin >> input1; // similar to stdin.readLineSync()
    cout << "Input another number\n";
    cin >> input2;
    cout << input1 << "+" << input2 << "=" << input1 + input2 << endl;
    return 0;
}