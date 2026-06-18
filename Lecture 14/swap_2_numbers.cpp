#include <iostream>
using namespace std;

void swap(int &a,int &b) {            //& is used for pass by reference and direct variables are used for pass by value
    int c;
    c=a;
    a=b;
    b=c;
}

int main() {
    int c,d;
    cout<<"Enter 2 numbers : ";
    cin>>c>>d;
    swap(c,d);
    cout<<"c "<<c<<"c "<<d;
    return 0;
}


// if pass by value , a copy of variable is sent to the function.   
// if pass by reference , direct variable is sent to the function