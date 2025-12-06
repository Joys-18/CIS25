/*Debug the following code. Output the highest of three inputs.  
Update the code to be nested if statement
Example: 
Output highest of three inputs.
*/
#include <iostream>
using namespace std;
int main() {    
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 > n2){
        if(n1 > n3){
            cout << "Number 1 is bigger\n";
        }
        else{
            cout << "Number 3 is bigger\n";
        }
    }
    else{
        if(n2 > n3){
            cout << "Number 2 is bigger\n";
        }
        else{
            cout << "Number 3 is bigger\n";
        }
    }
    return 0;
}
