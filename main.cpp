//Vending Machine Program by: Nicholas Horton
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int choice;
    
    cout << "Welcome to the drink machine" << endl;
    cout << "============================" << endl;
    cout << " Item:               Price: " << endl;
    cout << "1: Coke                  $2 " << endl;
    cout << "2: Dr. pepper            $2 " << endl;
    cout << "3: Sprite                $2 " << endl;
    cout << "4: Water                 $1 " << endl << endl;
    
    cout << "Please pick an option: " << endl;
    cin >> choice;
    
    switch (choice) {
            
        case 1 :
            cout << "Your selection: Coke" << endl;
            cout << "Price: $2" << endl;
            break;
        case 2 :
            cout << "Your Selection: Dr. Pepper" << endl;
            cout << "Price: $2" << endl;
            break;
        case 3 :
            cout << "Your Selection: Sprite" << endl;
            cout << "Price: $2" << endl;
            break;
        case 4 :
            cout << "Your selection: Water" << endl;
            cout << "Price: $1" << endl;
            break;
        default :
            cout << "You did not pick a valid option" << endl;
            }
    
    
    return 0;
}
