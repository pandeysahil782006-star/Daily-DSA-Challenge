#include <bits/stdc++.h>
using namespace std;
//void: does not returns anythiing
//return
//parameterized
//nonn parameterized

// void printName(string name){
//     cout << "hey "<< name << endl;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);
    
//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

//take two numbers and print its sum
// int sum(int num1, int num2){
//     int num3 = num1 +num2;
//     return num3;
// }
// int main(){
//     int num1,  num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;

// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1, num2);
//     cout<< minimum;
// }


//pass by value

// void doSomething(int num){
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// }
// int main(){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }

//pass by reference
void doSomething(int &num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}
//arrays are generically pass by reference