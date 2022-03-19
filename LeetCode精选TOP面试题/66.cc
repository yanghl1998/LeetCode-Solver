class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res{(digits[digits.size()-1]+1)%10};
        int addFlag=(digits[digits.size()-1]+1)/10;
        for(int i = digits.size()-2; i>=0; i--) {
            res.push_back((digits[i]+addFlag)%10);
            addFlag = (digits[i]+addFlag)/10;
        }
        if (addFlag != 0) {
            res.push_back(addFlag);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};