#include <iostream>
using namespace std;


//* Call by Value
void swap(int a,int b){
    cout<<"\nInside Function: "<<endl;
    cout<<"Before :-"<<endl;
    cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    
    int temp = a;
    a  = b;
    b = temp;

    cout<<"After :-"<<endl;
    cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    cout<<"Function End."<<endl;
}

//* Call by Pointer Reference
void swapPtr(int *a,int *b){
    cout<<"\nInside Function: "<<endl;
    cout<<"Before :-"<<endl;
    cout<<"A: "<<*a<<" | "<<"B: "<<*b<<endl;
    
    int temp = *a;
    *a  = *b;
    *b = temp;

    cout<<"After :-"<<endl;
    cout<<"A: "<<*a<<" | "<<"B: "<<*b<<endl;
    cout<<"Function End."<<endl;
}

//* Call by Reference Variable
void swapRef(int &a,int &b){
    cout<<"\nInside Function: "<<endl;
    cout<<"Before :-"<<endl;
    cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    
    int temp = a;
    a  = b;
    b = temp;

    cout<<"After :-"<<endl;
    cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    cout<<"Function End."<<endl;
}


int main(){

    int a = 10,b = 20;
    //* Doesn't Changes actaul value of Variables.
    // swap(a,b);    
    
    // cout<<"\nAfter Running swap(a,b) :-"<<endl;
    // cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    
    //* Changes actaul value of Variables.
    // swapPtr(&a,&b);    
    
    // cout<<"\nAfter Running swapPtr(a,b) :-"<<endl;
    // cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    
    //* Changes actaul value of Variables.
    swapRef(a,b);    
    
    cout<<"\nAfter Running swapPtr(a,b) :-"<<endl;
    cout<<"A: "<<a<<" | "<<"B: "<<b<<endl;
    
    
    return 0;
}