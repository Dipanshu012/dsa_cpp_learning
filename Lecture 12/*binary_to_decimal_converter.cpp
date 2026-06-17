#include <iostream>
using namespace std;

int main() {
    int num, i, dec;
    cout<<"Enter num : ";
    cin>>num;
    dec = 0;
    do {
        i = num%10;
        num /= 10;
        dec = dec * 2 + i; 
    }while(num>0);
    cout<<dec;
}