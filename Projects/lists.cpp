#include <iostream>
#include <cmath>

using namespace std;


double *transform(double (*func)(double n), double arr[]){
    int length = sizeof(arr) / sizeof(double);
    double newArr[length];
    for(int i = 0; i < length; i++){
        newArr[i] = func(arr[i]);
    }
    return newArr;
}

double times2(double n){
    return n * 2;
}



int main(){
    double listDouble[3] = {2.3, 5.4, 6.7};
    double transformedList[3];
    double easyway[3];
    for(int i = 0; i < (sizeof(listDouble) / sizeof(double)); i++)
    {
        transformedList[i] = *(transform(times2, listDouble + i));
    }
     for(int i = 0; i < (sizeof(listDouble) / sizeof(double)); i++){
        cout << transformedList[i] << endl;
    }
    for(int i = 0; i < 3; i++){
        easyway[i] = times2(listDouble[i]);
    }
     for(int i = 0; i < 3; i++){
        cout << "easy way: " << easyway[i] << endl;
    }
    return 0;
}
    //cout << listDouble << endl;
    //cout << &listDouble << endl;
    //cout << sizeof(double) << endl;// returns the size of a single type or element
    //cout << sizeof(listDouble) << endl; // returns the cumulative sum of objects in the array
   
    /*
    
    for(int i = 0; i < (sizeof(newList) / sizeof(double)); i++){
        cout << newList[i] << endl;
    }
    
    */

    /*
    
    double pow2(double n, int e = 2){
    if(e == 0){
        return 1;
    }else {
        return n * pow2(n, e-1);
    }
}

    */
    