/*Define a struct named Item with two members: name (string) and id (int). 
Use new to dynamically allocate an array of items. 
Populate the array with sorted sample data (id, name- sort by name), min 100 records. 
Implement a binary search function to find an item by id. 
Ask the user for an ID to search for, and display the result. 
Free the memory using delete[].
*/
#include <iostream>

using namespace std;

struct Item{//two members struct
    string name;
    int id;
};
int binarySearch(Item* array, int n, int target);

int main(){
    const int SIZE = 100;
    //new to dynamically allocate an array of items
    Item* inventory = new Item[SIZE];
    //for loop to create 100 ID and names with to_string
    for(int i = 0; i < SIZE; i++){
        inventory[i].id = 1000 + i;
        inventory[i].name = "Item:" + to_string(i);
    }
    //user input variable
    int idNumber;
    //gather users input in selecting ID number between 1000, 1099
    cout << "\nWhat ID number are you searching for between 1,000 - 1,099?";
    cin >> idNumber;
    //find ID in array
    int idLocation = binarySearch(inventory, SIZE, idNumber);
    //display location and Item name
    if (idLocation == -1){
        cout << "ID not found!\n";
    }
    else{
        cout << "Item found!\n";
        cout << "Name: " << inventory[idLocation].name;
        cout << "\nIDnumber: " << inventory[idLocation].id;
        cout << "\n"; 
    }
    delete [] inventory;

    return 0;
}

int binarySearch(Item *array, int n, int target){
    
    int low = 0;
    int high = n - 1;

    while (low <= high){
    
        int middle = (low + high) / 2;
        if (array[middle].id == target){
            return middle;
        }
        else if (array[middle].id < target){
            low = middle + 1;
        }
        else{
            high = middle - 1;
        }
    }
    return -1;
}