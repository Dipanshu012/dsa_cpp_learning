#include <iostream>
using namespace std;

int main() {
    int last,pre,curr;
    cout<<"Enter num : ";
    int n;
    cin>>n;
    if (n==1) {
        cout<<n<<"th fibonacci no. is 0"<<endl; 
        return 0;
    }
    else if (n==2) {
        cout<<n<<"th fibonacci no. is 1"<<endl; 
        return 0;
    }
    else if (n<1) cout<<"Invalid inpur";
    else {
        for (int i=1,last=0,pre=1;i<=n-2;i=i+1) {
            curr = last + pre;
            last = pre;
            pre = curr;
        }
    }
    cout<<n<<"th fibonacci no. is "<<curr<<endl;
}