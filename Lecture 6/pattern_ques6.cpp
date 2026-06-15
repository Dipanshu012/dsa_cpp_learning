#include <iostream>
using namespace std;

int main() {
    int row,col;
    for (row=1;row<=5;row=row+1) {
        char name = 'a' + row-1;
        for (col=1;col<=5;col=col+1) {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}



/****** not a good method because we will not use ASCII values directly */

// int main() {
//     for (char c='a';c<=101;c=c+1) {
//         for (int i = 1;i<=5;i=i+1){
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }