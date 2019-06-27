// 题目链接：https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> romans;
        romans['I'] = 1;
        romans['V'] = 5;
        romans['X'] = 10;
        romans['L'] = 50;
        romans['C'] = 100;
        romans['D'] = 500;
        romans['M'] = 1000;
        int res = 0;
        int last = 0;
        for(int i = s.size() - 1; i >=0; i--){
            if(romans[s[i]] < last){
                res -= romans[s[i]];
            }                
            else{
                res += romans[s[i]];
            }
            last = romans[s[i]];
        }
        return res;
    }
};