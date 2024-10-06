# EXP_15_RECURSION
AIM:- to learn and implement the concept of recursion.<br>

Software Used:- VS code<br>

Theory:-<br>
A function that makes direct or indirect calls to itself is called recursive. This method is frequently applied to tackle issues that can be divided into more manageable, related subproblems.<br>
Base Case: A recursive function must have a base case, which is a condition that stops the recursion. Without a base case, the function would call itself infinitely. <br>  
Recursive Case: The recursive case is where the function calls itself with a smaller input. This is usually done to approach the base case.<br>

CODE:-
a
```
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
```
b
```
#include<iostream>
using namespace std;
//creating function
int add(int n){
if(n<=1){ //Terminating statement (Base Condition)
return 1;
}else{
return (n+add(n-1)); //Recursion
} }
int main(){
int X,n;
cout<<"Enter a number: ";
cin>>n;
X= add(n); //Function calling I
cout<<X;
return 0;
}
```
c
```
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
```
d
```

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

```

## OUTPUT
![image](https://github.com/user-attachments/assets/6f3ef525-5fab-4255-acc6-56abd8b0a021)
![image](https://github.com/user-attachments/assets/61008a3f-cba3-4d3a-b297-0a06f3dc66bf)
![image](https://github.com/user-attachments/assets/4bb01b78-dc6f-4f0e-b964-8c83e123bc01)
![image](https://github.com/user-attachments/assets/814ccfa5-22b4-414a-aba4-43ad19d9d313)

## CONCLUSION
In this experiment we learnt the logic of recursion and implemented it .
