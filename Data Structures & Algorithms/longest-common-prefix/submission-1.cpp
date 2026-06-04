class Solution {
public:
    // Vertical Scanning
    string longestCommonPrefix(vector<string>& strs) {
        for(int i=0;i<strs[0].length();i++){
            for(string & s: strs){
                if(i==s.length() || s[i]!=strs[0][i]){
                    return s.substr(0,i); // note if i==5 then the substr is of index 0,1,2,3,4
                }
            }
        }
        return strs[0];
    }
};
