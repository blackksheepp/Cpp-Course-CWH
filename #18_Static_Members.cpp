#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int counter;
    
    public:
        void set(int);
    
        static void showCount(){
            cout<<"The Count of Employee is "<<counter<<endl;
        }
    
}Harry, Rohan, Shubham;

int Employee::counter;

void Employee::set(int id)
{
    cout<<"Employee Number "<<counter+1<<"'s Id set to "<<id<<endl;
    counter++;
    Employee::showCount();
}

int main(){
    
    Harry.set(10);
    Rohan.set(20);
    Shubham.set(30);


    return 0;
}