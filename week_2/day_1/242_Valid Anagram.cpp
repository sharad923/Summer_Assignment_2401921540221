class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>temp(26,0);
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++)
        {
            temp[s[i]-'a']++;
        }
        for(int j=0;j<m;j++)
        {
            temp[t[j]-'a']--;
        }
        for(int k=0;k<temp.size();k++)
        {
            if(temp[k]!=0)
            return false;
        }
        return true; 
    }
};