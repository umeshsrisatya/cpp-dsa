class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        if ((b[0] < a[2] && b[1] < a[3]) && (b[2] > a[0] && b[3] > a[1])) {
            return true;
        }
        return false;
    }
};