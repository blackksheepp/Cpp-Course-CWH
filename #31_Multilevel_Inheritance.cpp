#include <iostream>
#include <cmath>
using namespace std;

class Simple
{
    public:

        int add(int a, int b){
            return a+b;
        }

        int subtract(int a, int b){
            return a-b;
        }

        int multiply(int a, int b){
            return a*b;
        }

        float divide(int a, int b){
            return float(a)/float(b);
        }
};

class Science : public Simple
{
    public:

        float power(int a,int b){
            int temp;
            temp = a;

            for (int i = 1; i < b; i++)
            {
                a *= temp;
            }
            return a;            
        }

        float sqroot(int a){
            return sqrt(float(a));
        }
};

class Hybrid : public Science
{
    public:

        int celsius(int faren){
            return (faren - 32) * 5/9; 
        }

        int faren(int cel){
            return (cel* 9.0) / 5.0 + 32;
        }

        void print(float var){
            cout<<"The value is: "<<var<<endl;
        }
};

int main(){
    int a = 10;
    int b = 22;

    Hybrid calc;
    
    calc.print(calc.sqroot(b+3));
    calc.print(calc.faren(0));
    calc.print(calc.celsius(32));
    
    return 0;
}