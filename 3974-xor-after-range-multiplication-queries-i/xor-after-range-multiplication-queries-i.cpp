class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
                int MOD=1e9+7;
                int n=queries.size();
                for(vector<int>arr:queries){
                          int idx=arr[0];
                          int r=arr[1];
                          int k=arr[2];
                          int v=arr[3];
                          while(idx<=r){
                              nums[idx]=(int)((1LL*nums[idx]*v)%MOD);
                              idx+=k;    
                          }
                }
                int ans=0;
                for(int a:nums)ans^=a;
                return ans;
    }
};