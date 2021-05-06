#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    
    public:
        void setId(int a)
        {
            id = a;
        }

        string printId()
        {   
            return to_string(id) + "i"; 
        }
};


class Complex
{
    int a=0,b=0;

    public:
        void setData(int v1, int v2)
        {
            a = v1;
            b = v2;
        }

        void setSum(Complex o1,Complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printData()
        {
            cout<<"Value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
        }
};

int main(){
 
    Employee Google[5];
    int id;
    
    for (int i = 0; i < 5; i++)
    {   
        cout<<"Enter the Id for Employee "<<i<<": ";cin>>id;
        Google[i].setId(id);
        cout<<"The value of Employee "<<i<<" is "<<Google[i].printId()<<"."<<endl;
    }
    
    
    Complex c1,c2,c3;

    c1.setData(1,2);
    c1.printData();          

    c2.setData(3,4);   
    c2.printData();          

    c3.setSum(c1,c2);
    c3.printData();          
    return 0;
}