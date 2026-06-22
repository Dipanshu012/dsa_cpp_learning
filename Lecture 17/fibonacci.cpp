#include <iostream>
using namespace std;

int main() {
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i<n;i++) {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"Fibonacci sequence : ";
    for (int j=0;j<n;j++) {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}