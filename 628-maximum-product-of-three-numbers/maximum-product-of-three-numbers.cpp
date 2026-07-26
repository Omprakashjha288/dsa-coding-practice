// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int n= nums.size();
//         int mxproduct = INT_MIN;
//         for(int i = 0;i<n;i++){
//             int current = nums[i];
//              int product = 1;
        
//         while(current>0){
//             int lastdigit = current % 10;
//             product = product * lastdigit;
//             current = current/10;
//         }
//         if (product > mxproduct){
//             mxproduct = product;
//         }
//         }
//         return mxproduct;
//     }
// };

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int n = nums.size();
//         int mxproduct = INT_MIN;

//         for (int i = 0; i < n; i++) {
//             int current = nums[i];
//             if (current == 0) {
//                 mxproduct = max(mxproduct, 0);
//                 continue;
//             }
//             int product = 1;
//             int temp = abs(current);
//             while (temp > 0) {
//                 int lastdigit = temp % 10;
//                 product = product * lastdigit;
//                 temp = temp / 10;
//             }
//             if (current < 0 && (product != 0)) {
//                 product = -product;
//             }
//             if (product > mxproduct) {
//                 mxproduct = product;
//             }
//         }
//         return mxproduct;
//     }
// };

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int op1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int op2 = nums[0] * nums[1] * nums[n - 1];
        
        return max(op1, op2);
    }
};