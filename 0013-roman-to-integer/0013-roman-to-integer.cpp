class Solution {
public:
    int romanVal(char ch) {
        if(ch == 'I') return 1;
        if(ch == 'V') return 5;
        if(ch == 'X') return 10;
        if(ch == 'L') return 50;
        if(ch == 'C') return 100;
        if(ch == 'D') return 500;
        if(ch == 'M') return 1000;
        else {
            return 0;
        }
    }

    int romanToInt(string str) {
        int index = 0;
        int sum = 0;

        while(index < str.size()-1) {
            if(romanVal(str[index]) < romanVal(str[index+1])) {
                sum -= romanVal(str[index]);
            } else {
                sum += romanVal(str[index]);
            }
            index++;
        }
        if(index < str.size()) {
            sum += romanVal(str[index]);
        }
        return sum;
    }
};