class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int ,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        bool ans=false;
        int count=0;
        for(auto i:mp){
            if(i.second>1){
                ans= true;
                break;
            }
           
        }
        return ans;

    }
};