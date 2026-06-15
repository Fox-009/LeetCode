class Solution {
public:
    int reverse(int x) {
        int s;
        if (x<0){
            s = -x;
        }
        else{
            s = x;
        };
        int r  = 0 ;
        while(s>0){
            r = r*10 + s%10;
            if (r>INT_MAX) return 0;
            s= s/10;
        }
        if (x<0){
            r = -r;
        }
        return r;
    }
};