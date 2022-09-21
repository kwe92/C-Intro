// Count Program
//  - Input integers until the user inputs -1
//  - Count numbers that are odd
//  - Count numbers that are a multiple of 3

#include<iostream>
using namespace std;

int main(){
    int N, counterOdd, counterMultiple;
    do{
        cout << "Enter a number or enter -1 to quit: \n";
        cin >> N;
        if(N % 2 > 0){
            counterOdd++;
        }
        if(N % 3 == 0){
            counterMultiple++;
        }
    }
    while(N != -1);

    cout << "Count of odd: " << counterOdd << endl;
    cout << "Count of multiples of 3: " << counterMultiple << endl;
    return 0;
}

// Issues with this code
//  - Variables are global and can be accessed anywhere in the program
//  - The logic for the counter mechanism is not enpasulated