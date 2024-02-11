class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Kel= celsius+273.15;
        double Fah = (celsius*1.80)+32.00;
        vector<double>ans;
        ans.push_back(Kel);
        ans.push_back(Fah);
        return ans;
        }
};