#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 12121;
    int original = n;
    int reverse = 0;

    while(n>0){
        int lastdigit = n%10;
        reverse = (reverse*10) + lastdigit;
        n = n/10;
    }
    

    if (original == reverse){
        cout << "yes, it is a palindrome";
    }
    else{
            cout << "no, its not a palindrome";
    }
    
    
    return 0;
}