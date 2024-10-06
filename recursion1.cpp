#include<iostream>
using namespace std;

// Function to calculate factorial
long fact(int n) {
    // Base Condition (Terminating statement)
    if (n <= 1) {
        return 1;
    } 
    // Recursive call
    else {
        return (n * fact(n - 1));
    }
}

int main() {
    int n, X;
    cout << "Enter a number: ";
    cin >> n;
    
    // Validate input (optional)
    if (n < 0) {
        cout << "Error: Factorial not defined for negative numbers.";
        return 1;
    }

    X = fact(n);
    cout << n << "! = " << X << endl;
    return 0;
}
