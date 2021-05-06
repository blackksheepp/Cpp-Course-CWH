#include <iostream>
using namespace std;

class Complex{

    int a,b;
    public:
        
        Complex(void){
            a = 0;
            b = 0;
        }
        
        Complex(int x){
            a = x;
            b = 0;
        }

        Complex(int x,int y){
            a = x;
            b = y;
        }

        void display(void){
            cout<<"The Number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int main(){
    
    Complex n1(1,3),n2(5),n3;
    n1.display();
    n2.display();
    n3.display();

    return 0;
}