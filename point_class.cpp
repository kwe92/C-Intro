// Class Point(x,y) euclidean distance

#include <iostream>
#include <cmath>

using namespace std;

class Point{
    public:
      double x, y;
      Point(double x, double y){
        this->x = x;
        this->y = y;
      }
      static double euclideanDistance(Point p1, Point p2){
        double distance = sqrt(_pow(p2.x - p1.x,2) + _pow(p2.y-p1.y,2));
        return distance;
      }

      Point operator+(Point& p){
        Point p1(this->x + p.x, this->y + p.y);
        return p1;
      }
       Point operator*(Point& p){
        Point p1(this->x * p.x, this->y * p.y);
        return p1;
      }

       Point operator/(Point& p){
        Point p1(this->x / p.x, this->y / p.y);
        return p1;
      }

       Point operator-(Point& p){
        Point p1(this->x - p.x, this->y - p.y);
        return p1;
      }
      
    private:
      static double _pow(double n, int e){
        if(e == 0){
            return 1;
        }
        return n * _pow(n, e-1);
      }

};

int main(){
    Point p1(11,7);
    Point p2(7,9);
    Point p3 = p1 / p2;
    Point p4 = p1 * p2;
    Point lstPoints[4] = {p1 , p2, p3, p2};
    int len = *(&lstPoints + 1) - lstPoints;
    
    cout << "x = " << p1.x << " y = " << p1.y << endl;
    cout << "The distance of p1 and p2 = " << Point::euclideanDistance(p1,p2) << endl;
    cout << "p1 / p2 = " << "Point(" << p3.x << ", " << p3.y <<")" << endl;
    cout << "Length of lstPoints: " << len << endl;

    
    return 0;
}