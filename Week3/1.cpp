#include <bits/stdc++.h>
#define ell '\n'
using namespace std;
 
 
 
int n, m; char grid[1005][1005]; bool v[1005][1005];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};
int ans = 0;
 
bool valid(int x, int y){
    return ((x>=0)&&(x<n)&&(y>=0)&&(y<m))&&grid[x][y]=='.'&&!v[x][y];
}
 
void dfs(int x, int y){
    v[x][y] = true;
    for(int i = 0;i<4;i++){
        int newx = dx[i]+x, newy = dy[i]+y;
        if(valid(newx,newy)){
            dfs(newx,newy);
        }
    }
}
 
int main() {
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>grid[i];
    }
    cout<<boolalpha;//True and False instead of 1 and 0
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(grid[i][j]=='.'&&!v[i][j]){
                dfs(i, j);
                ans++;
                //for(int i = 0;i<n;i++){
                //    for(int j = 0;j<m;j++){
                //        cout<<v[i][j]<<" ";
                 //   }cout<<ell;
                //}
            }
        }
    }
    cout<<ans<<ell;
}
