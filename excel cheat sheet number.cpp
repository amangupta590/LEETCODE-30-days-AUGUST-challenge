class Solution {
public:
//     int powerfind(int a,int n){
        
//     }
    int titleToNumber(string s) {
        int n=s.size();
        int result=0;
        for(int i=n-1;i>=0;i--){
            int ans=pow(26,i)*((s[n-i-1]-'A')+1);
            result+=ans;
        }
        return result;        
    }
};