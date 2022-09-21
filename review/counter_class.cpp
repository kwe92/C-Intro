// Implement the count program with objects

#include <iostream>

using namespace std;

class Counter{
    public:
     Counter(int D = 0){
        _counter += D;
     }
     void increment(){
        _counter++;
     }

     int getCount(){
        return _counter;
     }
    private:
     int _counter;
};

int main(){
    int N;
    Counter countOdd, countMultiple;
    do{
        cout << "Enter a number or -1 to exit: \n";
        cin >> N;
        if(N % 2 != 0 && N!=-1){
            countOdd.increment();
        }
        if(N % 3 == 0){
            countMultiple.increment();
        }
    }while(N != -1);
    

    cout << "Count of odd numbers: " << countOdd.getCount() << endl;
    cout << "Count of numbers that are a multiples of 3: " << countMultiple.getCount() << endl;
    return 0;
}