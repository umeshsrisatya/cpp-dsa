class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        int ax1  = a[0] ; 
        int ay1  = a[1] ; 
        int ax2  = a[2] ; 
        int ay2  = a[3] ; 
        int bx1  = b[0] ;
        int by1  = b[1] ;
        int bx2  = b[2] ;
        int by2  = b[3] ;
        if (ax2 <= bx1 || bx2 <= ax1 || ay1 >= by2 || by1 >= ay2) {
            return false;
        }
        return true;
    }
};