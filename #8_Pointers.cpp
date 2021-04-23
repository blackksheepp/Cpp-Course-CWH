#include <iostream>
using namespace std;

int main(){
    
    //* Pointers
    int a = 10;
    int *b = &a;

    cout<<"The Address of a = "<<&a<<endl;
    cout<<"The Value of a = "<<a<<endl;
    
    cout<<"The Value of b = "<<b<<endl;
    cout<<"The Address of b = "<<&b<<endl;
    cout<<"The Value of *b = "<<*b<<endl;

    //* Pointers to Pointers
    int **c = &b;
    
    cout<<"\n"<<endl;
    cout<<"The Value of b = "<<b<<endl;
    cout<<"The Address of b = "<<&b<<endl;
    cout<<"The Value of *b = "<<*b<<endl;
    
    cout<<"The Value of c = "<<c<<endl;
    cout<<"The Address of c = "<<&c<<endl;
    cout<<"The Value of *c = "<<*c<<endl;
    cout<<"The Value of **c = "<<**c<<endl;
    

    return 0;
}