class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int maxi=num;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                s[i]='6'+3;
                maxi=max(maxi,stoi(s));
                s[i]='9'-3;
            }
        }
        return maxi;
    }
};