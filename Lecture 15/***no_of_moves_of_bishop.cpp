/**** better approach */
#include <iostream>

using namespace std;

int main() {
    cout<<"Enter position : ";
    int a,b;
    cin>>a>>b;
    int count=0;
    count+=min(8-a,8-b);
    count+=min(8-a,b-1);
    count+=min(a-1,b-1);
    count+=min(a-1,8-b);
    cout<<"Number of moves = "<<count<<endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int LeftToRightDiagonal(int a,int b) {
//     int count=0;
//     int x = a, y = b;
//     while(x>0&&y>0) {
//         count+=1;
//         x--;y--;
//     }
//     x = a; y = b;
//     while(x<9&&y<9) {
//         count+=1;
//         x++;y++;
//     }
//     return count;
// }

// int RightToLeftDiagonal(int a,int b) {
//     int count=0;
//     int x = a, y = b;
//     while(x>0&&y<9) {
//         count+=1;
//         x--;y++;
//     }
//     x = a; y = b;
//     while(x<9&&y>0) {
//         count+=1;
//         x++;y--;
//     }
//     return count;
// }

// int main() {
//     int a,b;
//     cout<<"Enter position : ";
//     cin>>a>>b;
//     cout<<"Number of moves are : "<<LeftToRightDiagonal(a,b)+RightToLeftDiagonal(a,b)-4<<endl;
//     return 0;
// }