#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        string res="";
        map<char, int> flag;
        flag['I'] = '1';
        flag[4] = 'IV';
        flag[9] = 'IX';
        flag[10] = 'X';
        flag[40] = 'XL';
        flag[50] = 'L';
        flag[90] = 'XC';
        flag[100] = 'C';
        flag[400] = 'CD';
        flag[500] = 'D';
        flag[900] = 'CM';
        flag[1000] = 'M';

        for(int i=0;i<s.length();i++){
        }
    }
};