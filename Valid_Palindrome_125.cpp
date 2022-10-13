// Quetion 125
class Solution {
public:
    string toLower(string s){
          string s1="";
          for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(isalpha(ch)){
                ch = tolower(ch);
                s1+=ch;
            }
            else if(isdigit(ch))
            s1+=ch;
        }
        return s1;
        
    }
    bool isPalindrome(string s) {
        string s1=toLower(s);
        cout<<s1<<endl;
        int j=s1.size()-1;
        int i=0;
        while(i<=j){
            if(s1[i]!=s1[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
