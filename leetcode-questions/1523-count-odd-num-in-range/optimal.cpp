class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - low / 2;
    }
};


//here, (high+1)/2 we are doing because sum of odd numbers from 1 to n is (n+1)/2
//-low/2 because we are removing all the numbers before low
