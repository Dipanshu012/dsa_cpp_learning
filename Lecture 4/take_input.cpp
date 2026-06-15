#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter your first number: ";
    cin>>a;              // '>>' extraction operator
    cout<<"Enter your second number: ";
    cin>>b;
    //or you can use cin>>a>>b;
    cout<<a+b<<endl;           // '<<' insertion operator
    //or use
    //cout<<Sum of the two numbers is <<a+b<<endl;
};

//we do have a choice, whether to use ';' after int main() { };