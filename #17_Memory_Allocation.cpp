#include <iostream>
using namespace std;

class Shop
{
    private:
        int itemId[100], itemPrice[100], counter = 0;
    public:
        void setPrice(int,int);
        void displayPrice(); 
};

void Shop::setPrice(int id,int price)
{
    itemId[counter] = id;
    itemPrice[counter] = price;
    counter++;
}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Item of Item with Item id "<<itemId[i]<<" is "<<itemPrice[i]<<"."<<endl;
    }
}

int main(){

    Shop myshop;

    myshop.setPrice(312,250);
    myshop.setPrice(420,1550);
    myshop.setPrice(2,10);
    myshop.setPrice(777,69420);
    myshop.displayPrice();

    return 0;
}