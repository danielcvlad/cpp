// Example program
#include <iostream>

using namespace std;

int main () {
    
    cout << " Arithmetics Operations Program " << endl;
    cout << " Enter the operation number in order to perform Operation: " << endl;
    cout << "1. Addition " << endl << "2. Subtraction " << endl<< "3. Multiplication " << endl << "4. Division " << endl << "5. Modulo" << endl;
    
    int option_no, x, y;
    cin >> option_no;
    
    switch (option_no)
    {
        case 1:
            cout << " You selected addition "  << "Enter 2 numbers : " << endl;
            cin >> x >> y;
            cout << " The addition of " << x << " and " << y << " is: " << (x+y);
            break;
            
        case 2:
            cout << " You selected subtraction "  << "Enter 2 numbers : " << endl;
            cin >> x >> y;
            cout << " The subtraction of " << x << " and " << y << " is: " << (x-y);
            break;
            
        case 3:
            cout << " You selected multiplication "  << "Enter 2 numbers : " << endl;
            cin >> x >> y;
            cout << " The multiplication of " << x << " and " << y << " is: " << (x*y);
            break;
            
        case 4:
            cout << " You selected division "  << "Enter 2 numbers : " << endl;
            cin >> x >> y;
            cout << " The division of " << x << " and " << y << " is: " << (x/y);
            break;
            
        case 5:
            cout << " You selected modulo "  << "Enter 2 numbers : " << endl;
            cin >> x >> y;
            cout << " The modulo of " << x << " and " << y << " is: " << (x % y);
            break;
            
        default:
            cout << " Enter a valid input! " ;
            
    }
    
    return 0;
}

