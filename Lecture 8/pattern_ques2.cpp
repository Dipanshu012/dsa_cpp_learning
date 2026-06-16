#include <iostream>
using namespace std;

int main() {
    int row,col;
    for (row=1;row<=4;row=row+1) {
        for (col=4;col>=row+1;col=col-1) {
            cout<<"  ";
        }
        for (col=1;col<=row;col=col+1) {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}