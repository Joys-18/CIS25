/*Create a Product class with:
Private attributes: id, name, and price
A constructor to initialize these values
A destructor that displays a message
A method printDetails() to display the product's information
In main(), create a Product object with values of your choice 
and call printDetails() to verify.*/
#include <iostream>
#include <string>
using namespace std;

class Product{
    private:
    int id;
    string name;
    float price;

    public:
    Product(int i, string n, float p): id(i), name(n), price(p){//this will initialize the values when called
        cout << "Constructor Called\n";
    }
    ~Product(){//called when the object leaves the code
        cout << "Destructor Called\n";
    }
    void printDetails(){//to verify
        cout << "ID: " << id << " Name: " << name << " Price: " << price << "\n";
    }
};

int main(){
    Product product1(12345, "Medecine", 17.38);//this initialized all the private in one line of code
    product1.printDetails();

    return 0;
}