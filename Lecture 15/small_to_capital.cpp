#include <iostream>
using namespace std;

char func(char x) {
    char a = x-'a'+'A';
    return a;
}

int main() {
    char c;
    cout<<"Enter letter : ";
    cin>>c;
    cout<<func(c)<<endl;
    return 0;
}