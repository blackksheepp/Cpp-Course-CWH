#include <iostream>
#include <cmath>
using namespace std;


class Point
{   
    friend int displacement(Point,Point);
    int x,y;
    public:
        Point(int num1,int num2){
            x = num1;
            y = num2;
        };

        void display(void){
            cout<<"The coordinates are ("<<x<<","<<y<<")"<<endl;
        }
};

int displacement(Point x, Point y){
    int x1, x2;
    int y1, y2;
    double xC, yC, dis;

    x1 = x.x;
    y1 = x.y;
    x2 = y.x;
    y2 = y.y;

    xC = pow((x2-x1),2);
    yC = pow((y2-y1),2);
    
    dis = sqrt(xC+yC);
    return dis;
}

int main(){
    
    Point x1 = Point(1,0);
    x1.display();

    Point x2 = Point(12,22);
    x2.display();

    cout<<"The displacement between Point x1 and x2 is "<<displacement(x1,x2)<<"."<<endl;
    return 0;
}