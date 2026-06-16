#include <iostream>
using namespace std;

int main() {
    for (int row=1;row<=5;row=row+1) {
        int col;
        for (col=5;col>=row+1;col=col-1) {
            cout<<"  ";
        }
        for (col=1;col<=row;col=col+1) {
            cout<<"* ";
        }
        cout<<endl;
    }
}