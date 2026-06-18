#include <iostream>
using namespace std;

void swap(int &a,int &b) {           
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &p,float &q) {
    float r ;
    r=p;
    p=q;
    q=r;
}
                                                    // swap function is inbuilt in c++
int main() {
    int c,d;
    cout<<"Enter 2 numbers : ";
    cin>>c>>d;
    swap(c,d);
    cout<<"c "<<c<<"d "<<d<<endl;
    float f1=3.5,f2=66.4;                       //function call to it's type automatically
    swap(f1,f2);
    cout<<f1<<" "<<f2;
    return 0;
}

