class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(i<n&&s[i]==' '){
            i++;
        }
        int sign=1;
        if(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i]=='-'){
                sign = -1;
            }
            i++;
        }
        long num = 0;
        while(i < n && isdigit(s[i])){
            int digit=s[i]-'0';
            if(num > (INT_MAX - digit) / 10){
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            num=num*10+digit;
            i++;
        }
        num=sign*num;
        return num;
    }
};