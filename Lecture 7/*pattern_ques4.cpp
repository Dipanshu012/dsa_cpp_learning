#include <iostream>
using namespace std;

int main() {
    for (int row=1;row<=5;row=row+1){
        for (int col=row;col>=1;col=col-1) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}