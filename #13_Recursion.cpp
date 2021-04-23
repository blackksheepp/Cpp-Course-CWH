#include <iostream>
using namespace std;

int factorialRec(int num){
    
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return num * factorialRec(num-1);
    }

}

int factorialIter(int num){
    
    if (num == 0 || num == 1)
    {
        return 1;
    }
    
    else
    {
        int f = 1;                
        for (int i = 1; i <= num; i++)
            {   
                f = f * i;
            }
        return f;
    }
}

int fibonacciRec(int num){
    
    if (num == 0)
    {   
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciRec(num-1) + fibonacciRec(num-2);
    }
    
}

int fibonacciIter(int num){
    int f0 = 0;
    int f1 = 1;
    int fib = 0;

    for (int i = 1; i < num; i++)
    {
        fib = f0 + f1;
        f0 = f1;
        f1 = fib;
    }
    return fib;
}

int main(){
    
    
    return 0;
}