#include <iostream>
#include <fstream>//To save the information in a file
#include <string>

using namespace std;

class BankAccount{
    private:
    double balance;
    
    public:
    BankAccount(){
        balance = 0.0;
    }
    //To deposit funds and saving in to file
    void deposit(double amountDeposit){
        balance += amountDeposit;
        cout << "You added $" << amountDeposit << " to your balance.\n";
        saveTransaction("Deposit", amountDeposit);

    }
    //Makes and saves the purchase and changing the balance
    void purchase(string item, double price){
        if(price > balance){
            cout << "Insufficient Funds!\n";
            cout << "Transaction Denied.\n"; 
        }
        else{
            cout << "Transaction: " << item << " - $" << price << "\n";
            balance -= price;
            saveTransaction(item, price); 
        }
    }
    void printCurrentBalance(){
        cout << "Current Balance: $" << balance << "\n";
    }
    //Opens a file and appending the items and purchase creating a history
    void saveTransaction(string item, double purchase){
        ofstream bankFile("transaction.txt", ios::app);
        if (bankFile.is_open()){
            bankFile << item << " - $" << purchase << "\n";
            bankFile.close();
        }
    }
    //Displays all the transactions like a bank statement
    void bankStatement(){
        string line;
        ifstream bankStatement("transaction.txt");
        if(bankStatement.is_open()){
            while(getline(bankStatement, line)){
                cout << line << "\n";
            }
        }

    }
};
int main(){
    BankAccount myBankAccount;
    myBankAccount.deposit(100.00);
    myBankAccount.purchase("Food", 23.99);
    myBankAccount.purchase("Movies", 39.99);
    myBankAccount.printCurrentBalance();
    myBankAccount.bankStatement();

    return 0;
}