/*Create a class Item with: 
string name 
int quantity 
A method saveToFile() to write item data in the format: name,quantity 
A method loadFromFile() to read and display data from the file 
In your main() function: 
Create an instance of Item 
Assign values to its members 
Call saveToFile() to write the data to a file called items.txt 
*/
#include <iostream>
#include <fstream>//use files to read and write
#include <string>//to use string data type
using namespace std;

class Item{
    public:
    string name;//name of the item
    int quantity;//quantities of that item
    void saveToFile(){//writes the item object into file
        ofstream savedFile("item.txt");//opens a file name txt.file
        if (savedFile.is_open()){
            savedFile << name << ", " << quantity << "\n";
            savedFile.close();
            cout << "Item Saved In File!\n";
        }else{
            cout << "File unable to open.\n";
        }
    }
    void loadFromFile(){//reads the file and displays it
        ifstream loadedFile("item.txt");//name of the file being read
        if(loadedFile.is_open()){//checks if its open
            string fileStrings;//storing the file strings in this variable
            while (getline(loadedFile, fileStrings)){//while there is a line it loops
                cout << "File content: " << fileStrings << "\n";
            }
            loadedFile.close();
        }else{//if failed to open
            cout << "File unable to open.";
        }
    }
};
int main(){
    Item tool;//tool being the object
    tool.name = "Hammer";
    tool.quantity = 12;
    
    //call functions
    tool.saveToFile();
    tool.loadFromFile();

    return 0;
}