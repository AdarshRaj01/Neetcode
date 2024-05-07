class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto e:nums) mp[e]++;

        for(auto e:nums)
        {
            if(mp.find(e-1)==mp.end())
            {
                int temp=0;
                while(mp.find(e+temp)!=mp.end())
                {
                    temp++;
                }
                ans=max(temp,ans);

            }

        }

        return ans;


        
        
    }
};