class Solution {
public:
    int romanToInt(string s) {
        // 从后往前找 碰到 V X L C D M 就记下来 下一个是 I X C的时候就做减法而不是加法
        // 其他时候全部做加法
        int res = 0;
        // 还没开始 所以这些都还没出现过 false
        bool V=false, X=false, L=false, C=false, D=false, M=false;
        for(int i = s.length()-1; i >= 0; i--) {
            if (s[i]=='I') {
                // 现在的是I而且右边挨着的不是V或者X 所以表示的是1
                res += (V || X) ? -1 : 1;
                // 不管三七二十一 因为现在的是I 所以对于下一位来说，它的右边不会是下面的任一个
                V=false; X=false; L=false; C=false; D=false; M=false;
            }
            else if (s[i]=='X') {
                res += (L||C) ? -10 : 10;
                V=false; X=true; L=false; C=false; D=false; M=false;
            }
            else if (s[i]=='C') {
                res += (D || M) ? -100 : 100;
                V=false; X=false; L=false; C=true; D=false; M=false;
            }
            else if (s[i]=='V')  {
                res += 5;
                V=true; X=false; L=false; C=false; D=false; M=false;
            }
            else if (s[i]=='L') {
                res += 50;
                V=false; X=false; L=true; C=false; D=false; M=false;
            }
            else if (s[i]=='D') {
                res += 500;
                V=false; X=false; L=false; C=false; D=true; M=false;
            }
            else if (s[i]=='M') {
                res += 1000;
                V=false; X=false; L=false; C=false; D=false; M=true;
            }
        }
        return res;
    }
};