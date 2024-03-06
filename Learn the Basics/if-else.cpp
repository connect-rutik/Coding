/*
Q.1] write a program that takes an input of age
and print if you are adult or not.
*/

#include<bits/stdc++.h>
using namespace std;

// Answer -1
/*
int main() {
    int age;
    cin >> age;
    if(age >= 18){
        cout << "You are an adult" << endl;
    }
    else {
        cout << "You are not an adult" << endl;
    }
    return 0;
}
*/

/*
Q.2] A school has following rules for grading system -
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade. 
*/

// Answer - 2
/*
int main() {

    int marks ;
    cin >> marks ;
    if(marks < 25) {
        cout << "f" << endl;
    }
    else if(marks <= 44){
        cout << "E";
    }
      else if(marks <= 49){
        cout << "D";
    }
     else if(marks <= 59){
        cout << "C";
    }
      else if(marks <= 79){
        cout << "B";
    }
      else if(marks <= 100){
        cout << "A";
    }
}

*/

/*
Q.3] Take the age from the user and then decide accordingly
1. If age < 18
print -> not eligible for job
2. If age >= 18 and age <= 54
print -> "eligble for job"
3. If age >= 55 and age <= 57
print -> "eligible for job, but retirement soon"
4. If age > 57 
print -> "retitrement time"
*/

int main() {
 int age;
 cin >> age;
 if(age < 15){
   cout << "not eligible" << endl;
 } else if (age <= 54) {
   cout<< "eligble for job" << endl;
 } else if(age <= 57) {
    cout << "eligible for job, but retirement soon" << endl;
 } else {
    cout << "retitrement time" << endl;
 }
 return 0;
}
