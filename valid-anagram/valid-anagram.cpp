class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mp;
        int n=t.length();
        
        for(int i=0;i<n;i++){
            mp[t[i]]++;
        }
        
       for(int i=0;i<n;i++){
          if(mp.find(s[i])==mp.end()){
              return false;
          }
          else{
              mp[s[i]]--;
              if(mp[s[i]]==0)
                  mp.erase(s[i]);
             }
       }
        if(mp.size()==0){
            return true;
        }
        return false;
    }
};