class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        int rem = 0;
        while(x != 0){
            rem = x % 10;
            res = res*10 + rem;
            x = x / 10;
        }
        if(res > pow(2,31)-1 || res < -(pow(2,31))) res = 0;

        return res;
    }
};