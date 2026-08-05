class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int jumbo=int((tomatoSlices-2*cheeseSlices)/2);
        int small=cheeseSlices-jumbo;
        if(jumbo>=0 && small>=0 && jumbo+small==cheeseSlices && 4*jumbo+2*small==tomatoSlices){
            return {jumbo, small};
       }

        return{};
    }
};
