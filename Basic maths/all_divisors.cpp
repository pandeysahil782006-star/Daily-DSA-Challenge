#include <iostream>
using namespace std;

void printDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    
    // Loop sirf sqrt(n) tak chalega, yaani i * i <= n
    for (int i = 1; i * i <= n; i++) {
        
        // Agar n, i se poora divide ho raha hai
        if (n % i == 0) {
            cout << i << " "; // Pehla divisor print kiya
            
           
            // Jaise 36 ke liye 6 * 6 = 36 hota hai, toh do baar 6 print na ho jaye
            if (n / i != i) {
                cout << n / i << " "; 
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    printDivisors(n);
    
    return 0;
}