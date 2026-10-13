class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n>0){
            int digit=n%10;
            digits.push_back(digit);
            n=n/10;
        }
        sort(digits.begin(),digits.end());
        int first=digits[digits.size()-1];
        int second=digits[digits.size()-2];
        int maximum=first*second;
        return maximum;
        
    }
};