// Create a Point class with member variables x and y, static method euclidean distance
#include <iostream> // input output stream to inter act with the console and user kyboard inputs
#include <cmath> // Has math functions

using namespace std;

class Point{
    public:
      double x, y;
      Point(double val1, double val2){
        x = val1;
        y = val2;
      }
    private:
      static double _pow(double n, int e){
        if(e == 0){
            return 1;
        }
        return n * _pow(n, e - 1);
      }

      static double euclideanDistance(Point p1, Point p2){
        double distance = sqrt(_pow(p2.x - p1.x,2) + _pow(p2.y - p1.y,2));
      }

};

int main(){
    Point p1(3,4);
    Point p2(7,9);
    return 0;
}


