#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    
    public:
        // Complex(void);
        Complex(int,int);
        void display(){
            cout<<"The Number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

/*
//* Default Constructor
Complex::Complex(void){
    cout<<"Enter the Real Number: ";cin>>a;
    cout<<"Enter the Complex Number: ";cin>>b;
}*/

//* Parameterized Constructor
Complex::Complex(int num1,int num2){
    a = num1;
    b = num2;
}

int main(){
    //* Implicit
    Complex a(3,9);
    a.display();

    //* Explicit 
    Complex b = Complex(4,6);
    b.display();

    return 0;
}