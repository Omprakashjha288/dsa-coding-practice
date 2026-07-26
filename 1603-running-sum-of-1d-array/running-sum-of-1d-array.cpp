// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>res;
//         for(int i = 0;i<n;i++){
//             int sum = 0;
//             for(int j = 0;j<=i;j++){
//                 sum = sum + nums[j];
//             }
//             res.push_back(sum);
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        int currsum = 0;
        for(int i = 0 ;i<n;i++){
            currsum = currsum + nums[i];
            res.push_back(currsum);
        }
        return res;
    }
};