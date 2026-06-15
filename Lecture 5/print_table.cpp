#include <iostream>
using namespace std;

int main() {
    cout<<"Enter number: ";
    int n;
    cin>>n;
    for (int i=n;i<=(n*10);i=i+n) {
        cout<<i<<endl;
    }
};




/***** method 2 */

// int main() {
//     int n,i;
//     cout<<"Enter the table: ";
//     cin>>n;

//     for(i=1;i<=10;i=i+1)
//     {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }