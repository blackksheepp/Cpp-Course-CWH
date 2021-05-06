#include <iostream>
using namespace std;

class Y;
class X
{   
    friend void add(X,Y);
    int data;
    public:
        void setValue(int value){
            data = value;
        }
};

class Y
{   
    friend void add(X,Y);
    int data;
    public:
        void setValue(int value){
            data = value;
        }
};

void add(X o1, Y o2){
    cout<<"The sum of Data of X and Y object is "<<o1.data+o2.data<<"."<<endl;
}

class B;
class A
{   
    friend void swap(A &,B &);
    int value;
    public:
        void inpValue(int val){
            value = val;
        }

        void display(){
            cout<<"The value of Object c is "<<value<<"."<<endl;
        }

};

class B
{
    friend void swap(A &,B &);
    int value;
    public:
        void inpValue(int val){
            value = val;
        }

        void display(){
            cout<<"The value of Object d is "<<value<<"."<<endl;
        }

};

void swap(A &o1, B &o2){
    int temp = o1.value;
    o1.value = o2.value;
    o2.value = temp;
}

int main(){
    X a;
    Y b;

    a.setValue(3);
    b.setValue(6);

    add(a,b);

    A c;
    c.inpValue(4);
    c.display();

    B d;
    d.inpValue(6);
    d.display();
       
    swap(c,d);  
    c.display();
    d.display();

    return 0;
}