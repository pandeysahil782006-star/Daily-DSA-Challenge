#include<bits/stdc++.h>
using namespace std;
// write a program that takes an  input of  age and prints if you are an  adult or not
// int main(){
//     int age;
//     cin >> age;
//     if(age >=18){
//         cout << "you are an adult";
//     }    
//     else{
//         cout << "you are not an adult";
//     }
//     return 0;
// }


// a school has a following grading system
// a. below 25 - F
// b. 25-44 - E
// c. 45 to 49- D 
// d. 50 to 59 - C 
// e. 60 to 79 - B 
// f. 80 to 100 - A
// ask user to enter marks and print the corresponding grades

// int main() {
//     int marks;
//     cin >> marks;
//     if(marks<25){
//         cout << "F";
//     }
//     else if (marks <=44){
//         cout << "E";
//     }
//     else if ()
// }

/*
take the age from the user and decide accordingly 
1. iif age < 18
    print not eligible for job
2. if age >=18
    print eligible or  job
3. if age >=55 and age <= 57,
    print eligible for job but retirement soon
4. if age >57
     print retirement time

*/

int  main(){
    int age ;
    cin >> age;
    if (age<18){
        cout <<"not eligible for the job";

    }
    else if(age <=54){
        cout << "eligible for job";
    }
    else if(age<=57){
        cout <<"eligible for job but retirement soon";
    }
    else{
        cout << "retirement time";
    }
    
    return 0;
}