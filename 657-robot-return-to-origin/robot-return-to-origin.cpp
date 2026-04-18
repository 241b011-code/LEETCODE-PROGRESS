class Solution {
public:
    bool judgeCircle(string moves) {
       int x=0;
       int y=0;
       for(char a:moves){
               if(a=='U'){
                   x--;
               }
               else if(a=='D'){
                 x++;
               }
               else if(a=='L'){
                  y--;
               }
               else{
                 y++;
               }
       }
       return x==0 && y==0;   
    }
};