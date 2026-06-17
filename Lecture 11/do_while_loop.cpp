#include <iostream>
using namespace std;

int main() {
    int num, i=1, sum=0;
    cout<<"Enter num : ";
    cin>>num;
    do {
        sum += i;
        i++;
    }while(i<=num);
    cout<<"Sum of all natural numbers upto "<<num<<" is "<<sum<<endl;
}