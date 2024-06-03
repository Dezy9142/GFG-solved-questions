class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];
        int len=min(first.size(),last.size());
        
        int prefixsize=0;
        for(int i=0;i<len;i++){
            if(first[i]==last[i]){
                prefixsize++;
            }
            else{
                break;
            }
        }
        
        return  first.substr(0,prefixsize);
        
        
    }
};