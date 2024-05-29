class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto &num:nums2)
        {
            mp[num]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(nums1[i]);
                mp[nums1[i]]--;
                if(mp[nums1[i]]==0){
                    mp.erase(nums1[i]);
                }
            }
        }
        return ans;
    }
};