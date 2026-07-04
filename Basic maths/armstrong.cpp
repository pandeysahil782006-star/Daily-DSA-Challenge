#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 153;
    int original = n;
    int sum = 0;

    while(n>0){
        int lastdigit = n%10;
        
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;

    }
    if(sum == original){
        cout << "This is an armstrong number";
    }
    else {
        cout << "This is not an armstrong number";
    }
    return 0;
}