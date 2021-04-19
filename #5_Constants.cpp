#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    //* Constants
    const float pi = 3.14;
    // pi++; // Can't change value of Constants 
    cout<<"Trying to change value of pi "<<pi<<endl;

    //* Manipulators
    //? endl - Inserts \n.
    cout<<endl<<"I have a Newline at the end."<<endl;

    //? setw (from <iomanip>) - insters padding acc. to given number.
    int a=1,b=20,c=300,d=4000;

    cout<<"\nWithout setw :-"<<endl;
    cout<<"The value is "<<a<<endl;
    cout<<"The value is "<<b<<endl;
    cout<<"The value is "<<c<<endl;
    cout<<"The value is "<<d<<endl;

    cout<<"\nWith setw :-"<<endl;
    cout<<"The value is "<<setw(5)<<a<<endl;
    cout<<"The value is "<<setw(5)<<b<<endl;
    cout<<"The value is "<<setw(5)<<c<<endl;
    cout<<"The value is "<<setw(5)<<d<<endl;

    return 0;
}