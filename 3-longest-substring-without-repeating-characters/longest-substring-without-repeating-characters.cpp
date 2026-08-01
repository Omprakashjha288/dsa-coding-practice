// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//          vector<int> hash(256, -1);
//          int l =0,r =0;
//          int maxlen = 0;
//          int n = s.length();
//          while(r < n){
//             if(hash[s[r]] != -1){
//                 if(hash[s[r]] >= 1){
//                     l = hash[s[r]] + 1;
//                 }
//             }
//             int len = r - l + 1;
//             maxlen = max(maxlen,len);
//             hash[s[r]] = r;
//             r++;
//          }
//          return maxlen;
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1); // initialize with -1
        int l = 0, r = 0;
        int maxlen = 0;
        int n = s.length();

        while (r < n) {
            if (hash[s[r]] >= l) {
                // character already seen in current window
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r; // update last seen index
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};