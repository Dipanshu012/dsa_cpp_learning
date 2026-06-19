#include <iostream>
using namespace std;

int main() {
    int ans = INT_MIN;
    int arr[100] ;
    cout<<"Enter numbers (-1 to stop) : ";
    for(int i=0; ;i++) {
        cin>>arr[i];
        if (arr[i]==-1) break;
    }
    for (int i=0;arr[i]!=-1;i++) {
        if (arr[i]>ans) {
            ans = arr[i];
        }
        else continue;
    }
    cout<<"Max num is : "<<ans<<endl;
    return 0;
}