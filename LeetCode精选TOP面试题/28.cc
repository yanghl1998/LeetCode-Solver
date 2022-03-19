class Solution {
public:
    // 暴力解法
    int strStr(string haystack, string needle) {
        if (needle.length()==0) return 0;
        else if (needle.length() > haystack.length()) return -1;
        int i, j;
        for(i = 0; i <= haystack.length()-needle.length(); i++) {
            if (haystack[i]==needle[0]) {
                for(j = 0; j < needle.length(); j++) {
                    if (haystack[i+j]==needle[j]) continue;
                    else break;
                }
                if (j >= needle.length()) return i;
            }
        }
        return -1;
    }
};