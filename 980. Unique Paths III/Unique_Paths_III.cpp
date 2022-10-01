class Solution {
public:
    int ans=0;
    void f(int a,int b,int p,int q,vector<vector<int>>& grid,vector<vector<int>>& dp,int m,int n,int cnt){
        if(p<0 || q<0 || p>=m ||q >=n || dp[p][q]==1)return;
        if(grid[p][q]==-1)return ;
        if(grid[p][q]==1 and cnt==0){
            ans++;return;
        }
        
        dp[p][q]=1;
        int up=0;
        int down=0;
        int le=0;
        int ri=0;
        
         f(a,b,p-1,q,grid,dp,m,n,cnt-1);
      f(a,b,p+1,q,grid,dp,m,n,cnt-1);
       f(a,b,p,q+1,grid,dp,m,n,cnt-1);
         f(a,b,p,q-1,grid,dp,m,n,cnt-1);
        dp[p][q]=-1;
        
        
        
    }
    
    
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int x,y;
        int a,b;
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    a=i;
                    b=j;
                }
                if(grid[i][j]==2){
                    x=i;y=j;
                }
                if(grid[i][j]==0)cnt++;
            }
        }
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        cout<<x<<" "<<y<<"\n";
        cout<<a<<" "<<b<<"\n";
        
        f(a,b,x,y,grid,dp,m,n,cnt+1);
        return ans;
        
    }
};
