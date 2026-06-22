class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int ans = -1;
        for (int i=0;i<n;i++) {
            if (arr[i]>ans) {
                ans = arr[i];
            }
        }
        int second = -1;
        for (int j=0;j<n;j++) {
            if (arr[j]!=ans) {
                second = max(second,arr[j]);
            }
        }
        return second;
    }
};