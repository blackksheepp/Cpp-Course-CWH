#include <iostream>
using namespace std;

const long double pi = (long double)22/7;

int main(){
    
    //* Floats and Doubles

    cout<<sizeof(3.14)<<endl; // Without Suffix "f/F" it's read as a Double
    cout<<sizeof(3.14f)<<endl; // With Suffix "f/F" it's read as a Float

    // Similarly Suffix "d/D" indicates Double and Suffix "l/L" indicates Long Double.
    cout<<sizeof(3.1l)<<endl;

    //* Reference 
    int x = 10;
    int & y = x; // By using "&" y = x in a way that if y is changed x will be also changed and vice versa
    int z = x; // By not using "&" z = x in a way that if z is changed x will not be also changed and vice versa

    y++;
    z++;
    cout<<"The value of x is "<<x<<endl;    
    cout<<"The value of y is "<<y<<endl;
    cout<<"The value of z is "<<z<<endl;

    //* TypeCasting

    int pi = 3;
    float pi_f = float(pi)+0.14;

    cout<<"The value of the pi is "<<pi_f<<endl;
    cout<<"The value of the pi as a Integer is "<<int(pi_f)<<endl;

    //* Accessing Global Scope
    cout<<"The exact value of pi is "<<::pi<<endl;
    return 0;
}