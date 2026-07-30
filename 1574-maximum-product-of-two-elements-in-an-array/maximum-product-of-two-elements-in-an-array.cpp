// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         return (nums[n-1]  - 1)*(nums[n-2] - 1);
//             }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = 0;
        for(int i = 0;i<=n-1;i++){
            if(nums[i]>a){
                b = a;
                a = nums[i];
            }
            else if (nums[i]>b){
                b = nums[i];
            }
        }
        return (a-1)*(b-1);
    }
};