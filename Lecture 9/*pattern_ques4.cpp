#include <iostream>
using namespace std;

int main() {
    int row,col;
    for (row=1;row<=4;row=row+1) {
        for (col=1;col<=4-row+1;col=col+1) {
            cout<<"* ";
        }
        for (col=1;col<=2*(row-1);col=col+1) {
            cout<<"  ";
        }
        for (col=1;col<=4-row+1;col=col+1) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (row=4;row>=1;row=row-1) {
        for (col=1;col<=4-row+1;col=col+1) {
            cout<<"* ";
        }
        for (col=1;col<=2*(row-1);col=col+1) {
            cout<<"  ";
        }
        for (col=1;col<=4-row+1;col=col+1) {
            cout<<"* ";
        }
        cout<<endl;
    }
}