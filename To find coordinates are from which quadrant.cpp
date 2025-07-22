//NAME: Ratnesh Kumar
//PRN: 24070123083
//Experiment-3

#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;
    
    if (x > 0 && y > 0) {
        cout << "Your point is in Quadrant 1";
    }
    else if (x < 0 && y > 0) {
        cout << "Your point is in Quadrant 2";
    }
    else if (x < 0 && y < 0) {
        cout << "Your point is in Quadrant 3";
    }
    else if (x > 0 && y < 0) {
        cout << "Your point is in Quadrant 4";
    }
    else if (x == 0 && y != 0) {
        cout << "Your point is on the Y-axis";
    }
    else if (y == 0 && x != 0) {
        cout << "Your point is on the X-axis";
    }
    else {
        cout << "Your point is at the Origin";
    }
    
    return 0;
}

OUTPUT
Enter x value: 12
Enter y value: -12
Your point is in Quadrant 4

=== Code Execution Successful ===
