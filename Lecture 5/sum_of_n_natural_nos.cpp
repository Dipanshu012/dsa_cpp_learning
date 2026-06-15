#include <iostream>
using namespace std;

int main() {
    cout<<"Enter num: ";
    int n;
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i=i+1) {
        sum = sum + i;
    }
    cout<<"Sum : "<<sum;
}


// /******* method 2 */
// int main() {
//     cout<<"Enter num: ";
//     int n;
//     cin>>n;
//     int sum = (n*(n+1))/2;
//     cout<<"Sum: "<<sum;
// }