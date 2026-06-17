#include <iostream>
using namespace std;

// int main() {
//     int i, num;
//     cout<<"Enter num: ";
//     cin>>num;
//     cout<<"Reversed num is : ";
//     do{
//         i=num%10;
//         num = num/10;
//         cout<<i;
//     }while(num>0);
//     cout<<endl;
// }


//OR
int main() {
    int i, num,rev;
    cout<<"Enter num:";
    cin>>num;
    cout<<"Reversed num is : ";
    rev= 0;
    do {
        i = num%10;
        num = num/10;
        rev = rev * 10 + i;
    }while(num>0);
    cout<<rev<<endl;
}