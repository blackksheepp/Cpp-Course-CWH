#include <iostream>
using namespace std;

class Complex;

class Calculator
{
    public:
        void sumReal(Complex,Complex);
        void sumComplex(Complex,Complex);
};

class Complex
{
    int a,b;

    // friend void Calculator::sumComplex(Complex,Complex);
    friend class Calculator;
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


void Calculator::sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setComplex((c1.a + c2.a),(c1.b+c2.b));
    c3.printComplex();
}


int main(){
    
    Complex c1,c2;
    
    c1.setComplex(1,4);
    c2.setComplex(2,8);

    Calculator calc;
    calc.sumComplex(c1,c2);

    return 0;
}