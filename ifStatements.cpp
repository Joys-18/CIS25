#include <iostream> 
using namespace std; 
int main() { 
	int choice; 
	//menu and user input for choice
	cout << "1. Wi-Fi\n";
	cout << "2. Bluetooth\n";
	cout << "3. Exit\n";
	cout << "Choose an number: "; 
	cin >> choice; 
	//display messages of choosen number
	if (choice == 1){
		cout << "You're connected to the Wi-Fi\n"; 
	}
	else if (choice == 2){ 
		cout << "Connected to Airpods\n"; 
	}
	else if (choice == 3){ 
		cout << "You have exit.\n"; 
	}
	else{ 
		cout << "Invalid option.\n";
	}
	return 0; 
} 
