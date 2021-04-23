#include <iostream>
using namespace std;

int main(){
    
    //* For Loop
    //? Syntax
    // for (initialize; condition; increment/decrement)
    // {
    //     /* code */
    // }

    // for (int i = 2; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout<<i<<endl;
    //     }
        
    // }
    
    //* While Loop 
    //? Syntax
    // while (condition)
    // {
    //     /* code */
    // }
    
    // int j = 0, isPrime = 0;
    
    // while (j <= 20)
    // {   
                    
    //     for (int k = 2; k <= j; k++)
    //     {
    //         if (j%k == 0 && j!=k)
    //         {
    //             isPrime = 1;
    //             break;
    //         }
    //         isPrime = 0;            
    //     }        


    //     if ((isPrime == 0) && (j != 0 && j != 1))
    //     {
    //         cout<<j<<endl;
    //     }

    //     j++;       
    // }    
    
    //* Do While Loop
    //? Syntax 
    // do
    // {
    //     /* code */
    // } while (condition);

    // int a = 9;    
    // do
    // {
    //     if (a%3 == 0)
    //     {
    //         cout<<a<<endl;
    //     }

    //     a++;
    // } while (a < 100);

    // int num = 1;
    // do
    // {
    //     cout<<"6 x "<<num<<" = "<<6*num<<endl;
    //     num++;
    // } while (num <= 10);
        
    //* Break, Continue
    int age = 31;
    
    while (age < 100)
    {
        if (age < 18)
        {   
            age++;
            continue;
        }

        else if (age >= 18)
        {
            cout<<"You won! Age was: "<<age<<endl;
            break;
        }
        age++;
    }
    
    return 0;
}