class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        int n=nums.size();
        unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[nums[i]]=i;
           
       }
        for(int i=0;i<n;i++){
            int temp=target-nums[i];
            if(mp.find(temp)!=mp.end()&& i!=mp[temp]){
                ans[0]=i;
                ans[1]=mp[temp];
            }
        }
        return ans;
        
        
        
    }
};