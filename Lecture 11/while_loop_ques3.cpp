#include <iostream>
using namespace std;

int main() {
    int num, i=1;
    cout<<"Enter num : ";
    cin>>num;
    cout<<"Factors of "<<num<<" are : ";
    while(i<=num) {
        if(num%i==0) {
            cout<<i<<" ";
        }
        i++;
    }
    cout<<endl;
}