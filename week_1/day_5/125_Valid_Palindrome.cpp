class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        bool ans=true;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z')
            temp+=s[i]-'A'+'a';
            else if(s[i]>='a'&&s[i]<='z')
            temp+=s[i];
            else if(s[i]>='0'&& s[i]<='9')
                temp+=s[i];
            }
            int left=0,right=temp.size()-1;
            while(left<right){
                if(temp[left]!=temp[right]){
                    ans=false;
                    break;
                }
                left++;
                right--;
            }
    return ans;
        
    }
};