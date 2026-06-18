// zero will only come when it's 5X2 
//just check 5 kitni baar aaya
#include <iostream>
using namespace std;

int trailingzeros(int n) {

    int count = 0;

    while(n > 0) {

        n /= 5;

        count += n;
    }

    return count;
}

int main() {

    int num;

    cout << "Enter num : ";
    cin >> num;

    cout << "Trailing zeros are : "<< trailingzeros(num) << endl;

    return 0;
}


/**** can't accomodate numbers like 100 as their factorials will not fit inside int  */

// #include <iostream>
// using namespace std;

// int fact(int x) {
//     int ans=1;
//     for (int i=1;i<=x;i++) {
//         ans*=i;
//     }
//     return ans;
// }

// int trailingzeros(int a) {
//     int count = 0;
//     while(a) {
//         if (a%10!=0) {
//             break;
//         }
//         count++;
//         a = a/10;
//     }
//     return count;
// }

// int main() {
//     int num;
//     cout<<"Enter num : ";
//     cin>>num;
//     int n = fact(num);
//     cout<<n;
//     cout<<"Number of trailing zeros in factorial of given num are : "<<trailingzeros(n)<<endl;
//     return 0;
// }