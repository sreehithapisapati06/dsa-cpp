class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin;
        double fahrenheit;
        if(0<=celsius && celsius<=1000){
            kelvin=celsius+273.15;
            fahrenheit=celsius*1.80+32.00;
            return {kelvin, fahrenheit};
        }
        return{};
    }
};
