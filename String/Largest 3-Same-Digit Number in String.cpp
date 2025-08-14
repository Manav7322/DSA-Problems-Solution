class Solution {
public:
    string largestGoodInteger(string num) {
        string result="";
        for (int i=0;i<=(int)num.length()-3;i++){
            if(num[i]==num[i+1]&&num[i]==num[i+2]){
                string sub = num.substr(i, 3);
                if(sub>result){
                    result=sub;
                }
            }
        }
        return result;
    }
};