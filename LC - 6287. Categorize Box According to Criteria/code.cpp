class Solution {
public:
    bool isBulky (long long int length, long long int width, long long int height, long long int mass) {
        long long int vol = length * width * height;
        if(length >= 1e4 || width >= 1e4 || height >= 1e4 || mass >= 1e4 || vol >= 1e9) return true;
        return false;
    }
    string categorizeBox(int length, int width, int height, int mass) {
        bool check1 = isBulky(length, width, height, mass);
        bool check2 = mass >= 100 ? true : false;
        if(check1 && check2) return "Both";
        else if(check1 && !check2) return "Bulky";
        else if(!check1 && check2) return "Heavy";
        
        return "Neither";
    }
};
