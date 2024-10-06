
#include <iostream>
using namespace std;

// Function to print digits in reverse order
void print_rev(int i) {
    if (i > 0) { // Base Condition
        cout << (i % 10); // Print last digit
        print_rev(i / 10); // Recursion
    }
}

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    print_rev(i); // Function Calling
    cout << endl; // Newline for readability
    return 0;
}

