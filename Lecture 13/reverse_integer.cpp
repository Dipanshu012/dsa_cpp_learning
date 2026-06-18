// class Solution {
// public:
//     int reverse(int x) {
//         int rev=0,i;
//         if (x>=0) {
//             do {
//                 i = x%10;
//                 x=x/10;
//                 rev = rev*10+i;
//             }while(x>0);
//             return rev;                                          //runtime 3ms
//         }
//         else {
//             x = -x;
//             do {
//                 i = x%10;
//                 x=x/10;
//                 rev = rev*10+i;
//             }while(x>0);
//             rev = -rev;
//             return rev;
//         }
//     }
// };

class Solution {
public:
    int reverse(int x) {
       int i,rev=0;                                               //runtime 2ms
       do {
                i = x%10;
                x=x/10;
                if(rev>INT_MAX/10) return 0;
                else if(rev<INT_MIN/10) return 0;
                else rev = rev*10+i;
            }while(x!=0);
            return rev;
    }
};