 class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i = 0;i<=n-1;i++){
            int ele = nums[i];
        freq[ele]++;
        }
        int max = 0;
        for(auto it : freq){
            int c = it.second;
            if(c > max){
                max = c;
            }
        }
        int sum = 0;
        for(auto it : freq){
            int c = it.second; 
            if(c == max){
                sum = sum + max;
            }
            }
            return sum;
    }
};