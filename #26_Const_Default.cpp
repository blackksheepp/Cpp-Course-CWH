#include <iostream>
using namespace std;

class Simple
{

    int data1;
    int data2;
    public:
        Simple(int a,int b=0)
        {
            data1 = a;
            data2 = b;
        }

        void display(void){
            cout<<"The Numbers are "<<data1<<" and "<<data2<<"."<<endl;
        }
};

int main()
{
    Simple s1(1,4),s2(1);
    s1.display();
    s2.display();
    
    return 0;
}