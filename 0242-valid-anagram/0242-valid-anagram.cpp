class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto x:s){
            mp1[x]++; 
        }
        for(auto y:t){
            mp2[y]++;
        }
        bool ans=false;
        
        if(mp1==mp2){
            ans=true;
        }
       
        return ans;
    }
};