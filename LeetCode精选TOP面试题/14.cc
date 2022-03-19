class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // 如果存在 一定在最短的那个字符串里
        string potentialRes=strs[0];
        for(int i = 1; i < strs.size(); i++) {
            potentialRes = strs[i].length() < potentialRes.length() ? strs[i] : potentialRes;
        }

        int i, j;
        for( i = 0; i < potentialRes.length(); i++) {
            for( j = 0; j < strs.size(); j++) {
                if (strs[j][i] != potentialRes[i]) return potentialRes.substr(0, i);
            }
        }
        return potentialRes;
    }
};