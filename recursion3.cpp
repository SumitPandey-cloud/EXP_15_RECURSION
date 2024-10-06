#include <iostream>
using namespace std;

// Function to reverse a string
void reverse(char *str) {
    if (*str) { // Base Condition
        reverse(str + 1); // Recursion
        cout << *str; // Print character after recursive call
    }
}

int main() {
    char a[50];
    cout << "Enter a string: ";
    cin >> a;
    reverse(a); // Function calling
    cout << endl; 
    return 0;
}
