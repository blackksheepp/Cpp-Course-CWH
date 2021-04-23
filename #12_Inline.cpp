#include <iostream>
#include <string>
using namespace std;


//* Inline Functions
inline void print(string str){
    cout<<str<<'\n';
}

inline string input(string str){
    string inp;
    
    cout<<str; 
    cin.ignore();
    getline(cin,inp);

    return inp;    
}

//* Static variable
int totalSum(int *ptr,int size){
    static int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + *(ptr+i);
    }
    
    return sum;
}


int main(){

    print("Hmm....What are you doing?");
    string mystr = input("Enter a number: ");

    int array[] = {1,2,3,4};
    int array2[] = {1,2};
    int array3[] = {2,5};

    int sum = totalSum(array,sizeof(array)/sizeof(int));
    sum = totalSum(array2,sizeof(array2)/sizeof(int));
    sum = totalSum(array3,sizeof(array3)/sizeof(int));
    
    cout<<"The sum is: "<<sum<<endl;

    return 0;
}

