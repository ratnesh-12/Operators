//NAME: Ratnesh Kumar
//PRN: 24070123083
//Experiment-3

#include<iostream>
using namespace std;

int main() {
    int maths, physics, chemistry;
    int avg;
    char grade;
    
    cout << "Enter marks in Maths: ";
    cin >> maths;
    cout << "Enter marks in Physics: ";
    cin >> physics;
    cout << "Enter marks in Chemistry: ";
    cin >> chemistry;
    
    avg = (maths + physics + chemistry) / 3;

    if (avg >= 90) {
        grade = 'A';
    }
    else if (avg >= 80) {
        grade = 'B';
    }
    else if (avg >= 70) {
        grade = 'C';
    }
    else if (avg >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    cout<<"Grade:"<<grade<<endl;

    return 0;
}

OUTPUT
Enter marks in Maths: 77
Enter marks in Physics: 88
Enter marks in Chemistry: 99
Grade:B

=== Code Execution Successful ===
