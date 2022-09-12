// An extremely simple console app calculator
//     - Takes two terms as input variables and evaluates them based on the choosen available operators. 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string userSelection;
    int input1, input2;
    cout << "Input a number\n";
    cin >> input1;
    cout << "Input another number\n";
    cin >> input2;
    cout << "Available an operation:\n"<<"(e)xponent\n"<<"(m)ultiplication\n"<<"(d)ivision\n"<<"(a)addition\n"<<"(s)ubstraction\n";
    cin >> userSelection;
    if(userSelection == "e"){
        cout << input1 << " ^ " << input2 << " = " << pow(input1,input2) << endl;
    }
    else if(userSelection == "m"){
        cout << input1 << " * " << input2 << " = " << input1 * input2 << endl;
    }
    else if(userSelection == "d"){
        cout << input1 << " / " << input2 << " = " << input1 / input2 << endl;
    }
    else if(userSelection == "a"){
        cout << input1 << " + " << input2 << " = " << input1 + input2 << endl;
    }
    else if(userSelection == "s"){
        cout << input1 << " - " << input2 << " = " << input1 - input2 << endl;
    }
    else{
        cout << userSelection << " is not in the list of available operators.";
    }
    return 0;
}