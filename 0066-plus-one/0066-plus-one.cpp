class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        for(int i=0;i<digits.size();i++){
            ans.push_back(digits[i]);
        }
        for(int i=ans.size()-1;i>=0;i--){
           if(ans[i]<9){
            ans[i]++;
            return ans;
           }else{
            ans[i]=0;
           }
        }
        ans.insert(ans.begin(),1);
        return ans;
    }
};