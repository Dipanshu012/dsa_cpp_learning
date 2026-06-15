#include <iostream>
using namespace std;

int main() {
    int package;
    cout<<"Enter package amount offered : ";
    cin>>package;

    if (package > 10) {
        cout<<"accepted"<<endl;
    }
    else {
        cout<<"rejected"<<endl;
    }
};

// int main () {
//     int marks;
//     cout<<"Enter marks scored : ";
//     cin>>marks;

//     if (marks >= 33) { 
//         cout<<"pass";
//     }
//     else {
//         cout<<"fail";
//     }
// };

// int main() {
//     int a, b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;

//     if (a > b) {
//         cout<<"a is greater";
//     }
//     else {
//         cout<<"b is greater";
//     }
// };

// /*********** even or odd */
// int main() {
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;

//     if (num%2 == 0) {
//         cout<<"even";
//     }
//     else {
//         cout<<"odd";
//     }
// };

// /******* number is positive, negative or zero */
// int main() {
//     int num;
//     cout<<"Enter num : ";
//     cin>>num;

//     if (num > 0) {
//         cout<<"positive";
//     }
//     else if (num == 0) {
//         cout<<"zero";
//     }
//     else cout<<"negative";
// };


// // char is vowel or not
// int main () {
//     char c;
//     cout<<"Enter char : ";
//     cin>>c;

//     if (c == 'a') {
//         cout<<"vowel";
//     }
//     else if (c == 'e') {
//         cout<<"vowel";
//     }
//     else if (c == 'i') {
//         cout<<"vowel";
//     }
//     else if (c == 'o') {
//         cout<<"vowel";
//     }
//     else if (c == 'u') {
//         cout<<"vowel";
//     }
//     else cout<<"not a vowel";
// };


// // days of the week
// int main() {
//     int num;
//     cout<<"Enter num : ";
//     cin>>num;

//     if (num == 1) {
//         cout<<"Monday";
//     }
//     else if (num == 2) {
//         cout<<"Tuesday";
//     }
//     else if (num == 3) {
//         cout<<"Wednesday";
//     }
//     else if (num == 4) {
//         cout<<"Thrusday";
//     }
//     else if (num == 5) {
//         cout<<"Friday";
//     }
//     else if (num == 6) {
//         cout<<"Saturday";
//     }
//     else if (num == 7) {
//         cout<<"Sunday";
//     }
//     else cout<<"Invalid input"<<endl;
// };