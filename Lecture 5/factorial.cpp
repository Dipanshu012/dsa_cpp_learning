#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter num: ";
    cin>>n;
    int fact = 1;
    if (n==0) {
        fact = 1;
        cout<<"Factorial of "<<n<<" is "<<fact;
    }
    else if (n>0) {
        for (int i=1;i<=n;i=i+1) {
            fact = fact * i;
        }
        cout<<"Factorial of "<<n<<" is "<<fact;
    }
    else cout<<"Invalid input";
}