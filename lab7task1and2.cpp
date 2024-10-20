#include<iostream>
#include <cmath>     
using namespace std;

int main() {
    int n;
    cout << "Enter task number: ";
    cin >> n;

    double y;

    switch (n) {
    
    case 1: {
        int x;
        cout << "Enter x: ";
        cin >> x;
        
        if (x < 0) {
            y = exp(-x) + exp(x);
        }
        else {
            y = log(sin(x) + 2);
        }

        cout << "f(x)=" << y << endl;

        break;
    }
    
    case 2: {
        int number;
        cout << "Enter number of day: ";
        cin >> number;
        
        switch (number)
        {
        case 1: {
            cout << "Monday";              
            break;
        }
        case 2: {
            cout << "Tuesday";
            break;
        }
        case 3: {
            cout << "Wednesday";
            break;
        }
        case 4: {
            cout << "Thursday";
            break;
        }
        case 5: {
            cout << "Friday";
            break;
        }
        case 6: {
            cout << "Saturday";
            break;
        }
        case 7: {
            cout << "Sunday";
            break;
        }
        default:
            cout << "Error" << endl;
            break;
        }
        
        break;
    }
    default:
        cout << "Error" << endl;
        break;
    }

    return 0;
}
