class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int index = 0;
        int count =1;
        for (int i{1};i<s.length();i++){
            if(ans[index]!=s[i]){
               count = 1;
               ans+=s[i];
               index++;
            }

            else{
                if(count<2){
                    ans+=s[i];
                    index++;
                    count++;
                }
            }

        }

        return ans;

    }
};