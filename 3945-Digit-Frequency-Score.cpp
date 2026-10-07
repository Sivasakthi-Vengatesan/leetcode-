class Solution {
public:
    int digitFrequencyScore(int n) {
        int totsum = 0;
        while (n > 0) {
            int a = n % 10;
            totsum += a;
            n /= 10;
        }
        return totsum;
    }
};