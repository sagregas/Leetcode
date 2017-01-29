class Solution {
public:
    int hammingDistance(int x, int y) {
        int result =  x ^ y;
        int count = 0;

        while(result != 0){
            if(result % 2 == 1){
                count++;
            }
            result = result / 2;
        }

        return count;
    }
};
