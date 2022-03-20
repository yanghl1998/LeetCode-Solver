class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows==0) return res;
        res.push_back(vector<int>{1});
        if (numRows==1) {
            return res;
        }
        res.push_back(vector<int>{1,1});
        if (numRows==2) {
            return res;
        }
        for(int i = 3; i <= numRows; i++) {
            vector<int> layer(i, 1);
            for(int j = 1; j < layer.size()-1; j++) {
                layer[j] = res[i-2][j-1]+res[i-2][j];
            }
            res.push_back(layer);
        }
        return res;
    }
};