class Solution {
public:
    // Hash Table (using Array) [Frequency table]
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            // Pitfall :- forget to check the size 
            return false;
        }

        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;      // Case Sensitivity not taken care 
            count[t[i]-'a']--;
        }

        for(auto val: count){
            if(val!=0){
                return false;
            }
        }
        return true;
    }
};
