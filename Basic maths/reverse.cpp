#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7789;
    int revNum = 0;  //store the new reversed num
    while (n>0){
        int lastdigit= n%10;

        revNum = (revNum*10) + lastdigit;
        n = n/10;
    }

    cout << revNum << endl;
    
    return 0;
}
