class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==0 or word.size()==1)
            return true;
        int i=0;
        if(isupper(word[i]) and isupper(word[i+1])){
            i++;
            while(isupper(word[i])){
                if(i==word.size()-1)
                    return true;
                i++;
            }       
            return false;
        }
        else if(isupper(word[i]) and islower(word[i+1])){
            i++;
            while(islower(word[i])){
                if(i==word.size()-1)
                    return true;
                i++;
            }
            return false;
        } 
        else{        
            while(islower(word[i])){
                if(i==word.size()-1)
                    return true;
                i++;            
            }
        }
        return false;        
    }
};
