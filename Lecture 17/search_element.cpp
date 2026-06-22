#include <iostream>
using namespace std;

int main() {
    cout<<"Enter array :";
    int arr[100];
    for (int i=0; ;i++) {
        cin>>arr[i];
        if (arr[i]==-1) break;
    }
    int x;
    cout<<"Enter number you want to find : ";
    cin>>x;
    for (int i=0; ;i++) {
        if (arr[i]==x) {
            cout<<"Position of x is index : "<<i<<endl;
            break;
        }
        else if (arr[i]==-1) break;
    }
    return 0;
}