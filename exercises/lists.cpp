#include <iostream>
#include <cmath>

using namespace std;

double pow2(double n, int e = 2){
    if(e == 0){
        return 1;
    }else {
        return n * pow2(n, e-1);
    }
}


/*

double* map(double (*func)(double n, int e), double arr[]){
    int length = sizeof(arr) / sizeof(double);
    double newArr[length];
    for(int i = 0; i < length; i++){
        newArr[i] = func(arr[i]);
    }
    return newArr;
}

*/

int main(){
    double listDouble[3] = {2.3, 5.4, 6.7};
    cout << listDouble << endl;
    cout << &listDouble << endl;
    cout << sizeof(double) << endl;// returns the size of a single type or element
    cout << sizeof(listDouble) << endl; // returns the cumulative sum of objects in the array
    for(int i = 0; i < (sizeof(listDouble) / sizeof(double)); i++){
        cout << pow(listDouble[i], 2) << endl;
    }
    return 0;
    
}