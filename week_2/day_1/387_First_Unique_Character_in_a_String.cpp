class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++)
        {
            bool temp=true;
            int j=0;
            while(j<s.size())
            {
                if(s[i]==s[j] && i!=j){
                    temp=false;
                    break;
                }
                    j++;
            }
            if(temp)return i;
        }
        return -1;

        
    }
};