#include <iostream>
using namespace std;

int main() {
    for(int row=1;row<=5;row=row+1) {
        char name = 'a' + row-1;
        for(int col=1;col<=row;col=col+1) {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}