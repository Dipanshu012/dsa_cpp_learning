#include <iostream>
using namespace std;

int main() {
    int arr[]={1,45,3,4,56,2,3,5,8} ;
    int start=0,end=8;
    while(start<end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int i=0;i<=8;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}