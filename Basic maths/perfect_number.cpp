#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num){

    if(num<=1) return false;

    int sum = 1;
    
    for(int i = 2; i*i <=num; i++){
        if(num%i == 0){
            sum += i; //first divisor added

            if(num/i != i){
                sum += num/i;
            }

        }
    }
    return sum == num;
}

int main(){
    int n;
    cout << "Enter a number to check:";
    cin >> n;

    if(checkPerfectNumber(n)){
        cout << n << "is a perfect number" << endl;
    } else {
        cout << n << "is not a perfect number" << endl;
    }
    return 0;
}