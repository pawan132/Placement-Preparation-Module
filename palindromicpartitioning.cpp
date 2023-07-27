bool isPalindrome(string str)
{
    int start=0,end=str.size()-1;
    while(start<end)
    {
        if(str[start]!=str[end]) return false;
        start++;
        end--;
    }
    
    return true;
}

void find(int i,string str,vector<string> &v,vector<vector<string>> &ans)
{
    if(i==str.size())
    {
        ans.push_back(v);
        return ;
    }
    
    string s="";
    for(int j=i;j<str.size();j++)
    {
        s+=str[j];
        if(isPalindrome(s))
        {
            v.push_back(s);
            find(j+1,str,v,ans);
            v.pop_back();
        }
    }
}
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        find(0,s,v,ans);
        return ans;
    }
};