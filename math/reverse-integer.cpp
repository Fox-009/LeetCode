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
            int digit = s%10;
            r = r*10 + digit;
            if(r > (INT_MAX - digit)/10)
                return 0;
            s= s/10;
        }
        if (x<0){
            r = -r;
        }
        return r;
    }
};