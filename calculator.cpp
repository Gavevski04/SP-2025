#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Get input from user
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Validate input
    if (cin.fail()) {
        cout << "Error: Invalid input!" << endl;
        return 1;
    }
    
    // Calculate and display sum
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    
    return 0;
}