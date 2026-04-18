class Solution {
public:
    int minimumDistance(vector<int>& nums) {
           int ans=INT_MAX;
           int n=nums.size();
          
           map<int,vector<int>>indexes;
           for(int i=0;i<n;i++){
               indexes[nums[i]].push_back(i);
           }
           for(auto it:indexes){
                vector<int>idx=it.second;
                int m=idx.size();
                if(m<3)continue;
                int temp=INT_MAX;
                int i=0;
                int j=2;
                int f,s,t;
                while(j<m){
                   f=abs(idx[j-2]-idx[j-1]);
                   s=abs(idx[j-1]-idx[j]);
                   t=abs(idx[j]-idx[j-2]);
                   temp=min(temp,f+s+t);
                  
                   j++;
                }
                
                temp=min(temp,f+s+t);
                ans=min(ans,temp);

           }
           if(ans==INT_MAX)ans=-1;
           return ans;
    }
};