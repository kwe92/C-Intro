// Create a Point class with member variables x and y, static method euclidean distance
#include <iostream> // input output stream to inter act with the console and user kyboard inputs
#include <cmath> // Has math functions

using namespace std;

class Point{
    public:
      double x, y;
      Point(double x, double y){
        this -> x = x;
        this -> y = y;
      }
      Point operator+(Point& p){
        Point p1(this->x + p.x, this->y + p.y);
        return p1;
      }
      static double euclideanDistance(Point p1, Point p2){
        double distance = sqrt(_pow(p2.x - p1.x,2) + _pow(p2.y - p1.y,2));
        return distance;
      }

    private:
      static double _pow(double n, int e){
        if(e == 0){
            return 1;
        }
        return n * _pow(n, e - 1);
      }
};

int main(){
    Point p1(3,4);
    Point p2(7,9);
    Point p3 = p1 + p2;

    cout << "x = " << p3.x << " y = " << p3.y << endl;
    cout << Point::euclideanDistance(p1,p3) << endl;
    
    return 0;
}


