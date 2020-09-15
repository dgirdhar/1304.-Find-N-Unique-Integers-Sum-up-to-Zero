class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        bool addZero = (n % 2 == 1);
        int counter = n / 2;
        int iter = 0;
        
        for (int i = -counter; i <= counter; ++i) {
            if (!addZero && i == 0) {
                continue;
            }
            res[iter++] = i;
        }
        return res;
    }
};
