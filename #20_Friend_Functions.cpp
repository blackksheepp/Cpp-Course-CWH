#include <iostream>
using namespace std;

class Complex
{
    int a,b;

    friend Complex sumComplex(Complex,Complex);
    public:

        void setComplex(int n1,int n2)
        {
            a = n1;
            b = n2;
        }

        void printComplex(void)
        {
            cout<<"The Complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};


Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setComplex((c1.a + c2.a),(c1.b+c2.b));
    return c3;
}

int main(){
    
    Complex c1,c2,c3;
    c1.setComplex(1,4);
    c1.printComplex();

    c2.setComplex(2,8);
    c2.printComplex();

    c3 = sumComplex(c1,c2);
    cout<<"The sum of ";
    c3.printComplex();

    
    return 0;
}