#include <iostream>
using namespace std;

int main(){
    
    //* Arrays
    int array[] = {5,11,8,900,121};
    
    // int array[6];
    // array[0] = 78;
    // array[1] = 6;
    // array[2] = 12;
    // array[3] = 411;
    // array[4] = 1;
    // array[5] = 22;

    // cout<<"The value at 0 index of Array is: "<<array[0]<<endl;
    // cout<<"The value at 1 index of Array is: "<<array[1]<<endl;
    // cout<<"The value at 2 index of Array is: "<<array[2]<<endl;
    // cout<<"The value at 3 index of Array is: "<<array[3]<<endl;
    // cout<<"The value at 4 index of Array is: "<<array[4]<<endl;
    
    int size = sizeof(array)/sizeof(int);
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"The value at "<<i<<" index of Array is: "<<array[i]<<endl;
    // }
    
    //* Pointers to Arrays
    int *ptr = array;

    for (int i = 0; i < size; i++)
    {
        cout<<"The value at "<<i<<" index of Array is: "<<*(ptr+i)<<endl;    
    }
    
    
    return 0;
}