#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int a) {
    int count=0;
    while(a) {
        a = a/10;
        count++;
    }
    return count;
}

bool armNo(int n,int count) {
    int temp=n,ans=0,rem;
    while(temp>0) {
        rem = temp%10 ;
        temp/=10;
        ans = ans + pow(rem,count);
    }
    if (ans==n) return 1;
    else return 0;
}

int main() {
    int num;
    cout<<"Enter num : ";
    cin>>num;
    int count = countdigit(num);
    if (armNo(num,count)==1) cout<<"Num is Armstrong number";
    else cout<<"Num is not Armstrong number";
    return 0;
}