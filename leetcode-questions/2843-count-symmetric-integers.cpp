class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low; i<=high; i++){
            string s=to_string(i);
            if(s.length()%2!=0){
                continue;
            }
            int firstHalf=0;
            int secondHalf=0;
            int n=s.length()/2;
            for(int j=0; j<n; j++){
                firstHalf+=s[j]-'0';
                secondHalf+=s[j+n]-'0';
            }
            if(firstHalf==secondHalf){
                count++;
            }


            }
        return count;
    }

        
        
    
};
