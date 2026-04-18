class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
          int n=words.size();
          if(words[startIndex]==target){
             return 0;
          }
          int r=(startIndex+1)%n;
          int l=(startIndex-1+n)%n;
          int c=1,c2=1;
          int ans=INT_MAX;
          while(r!=startIndex){
                if(words[r]==target){
                  ans=min(c,ans);
                     break;
                }
                c++;
                r++;
                r%=n;
          }
          
          while(l!=startIndex){
                if(words[l]==target){
                   ans=min(c2,ans);
                     break;
                }
                c2++;
                l--;
                if(l<0){
                  l=n-1;
                }
          }
  return ans==INT_MAX?-1:ans;

    }
};