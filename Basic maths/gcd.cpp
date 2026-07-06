#include <bits/stdc++.h>
using namespace std;

// Function ka naam aur definition ek sath rakhte hain
int findGCD(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) return b;
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Ab call sahi naam se ho rahi hai
    cout << "GCD of " << a << " and " << b << " is: " << findGCD(a, b) << endl;
    
    return 0;
}
