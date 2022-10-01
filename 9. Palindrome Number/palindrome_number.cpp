class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        bool flag=false;int j=s.size();
       // cout<<j<<"\n";
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[j-1]){
                return 0;
            }
            j--;
        }
        return 1;
        
        
        
    }
};
