// storage of one type of data to other type for eg. char storage to int

// int a = 10;
// char c = 'b';
// a = c;
// then 'b' will not be stored in a , but the ASCII value of 'b' will be stored in a i.e. 99

// in same way if
// int a = 66;
// char c = 'd';
// c = a;
// then '66' will not be stored in c , but the ASCII char of '66' will be stored in c i.e. B
// if a = 466 hota then data loss ho jaata , bcoz ASCII value 466 hoti hi nhi

// if we will typecast bigger memory datatype into smaller memory datatype (eg. double to float) , then we could face some data loss 

#include <iostream>
using namespace std;

int main() {
    int a = 10; 
    char c = 'd';
    // a = c;
    // cout<<a;
    c = a;
    cout<<c;  // no output , ASCII mein koi space raha hoga 10 value pr
};