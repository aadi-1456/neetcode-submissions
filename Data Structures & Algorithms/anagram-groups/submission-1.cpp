class Solution {
public:
    // Hash Table (Arrays) Optimized Solution
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto s:strs){
            vector<int> count(26,0);     // Common Pitfalls     Here it is validate for the lowercase alphabhets
            for(char c: s){
                count[c-'a']++;
            }
                            //vector<int> count(52, 0); // 26 lowercase + 26 uppercase
                            // for (char c : s) {
                            //     if (c >= 'a' && c <= 'z') {
                            //         count[c - 'a']++;        // Indices 0 to 25
                            //     } else if (c >= 'A' && c <= 'Z') {
                            //         count[c - 'A' + 26]++;   // Indices 26 to 51
                            //     }
                            // }

            string key = to_string(count[0]);
            for(int i=1;i<26;i++){
                key+= ','+ to_string(count[i]);  // Common Pitfalls 
            }   
            // Creating a New Key Format That Has Collisions: if key+= to_string(count[i]) counts [1,11] and [11,1] could produce the same string "111"
            
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
