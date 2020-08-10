class Solution {
public:
    
    bool isPalindrome(string s) {
        if(s.size()==0)
            return true;
        int arr[28]={0};
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                if(islower(s[i])){
                    arr[s[i]-'a']+=1;

                }
                if(isupper(s[i])){
                    arr[s[i]-'A']+=1;
                }
            }
        }
        for(int i=0;i<=26;i++){
            if(arr[i]%2==1){
                return false;
            }
        }
        return true;       
    }
};