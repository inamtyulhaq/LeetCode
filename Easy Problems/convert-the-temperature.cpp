class Solution {
public:
        vector<double> convertTemperature(double celsius) {
        vector<double> vec;
        double keh = celsius + 273.15;
        double feh = celsius * 1.80 + 32.00;
        vec.push_back(keh);
        vec.push_back(feh);
        return vec;
    }
};
