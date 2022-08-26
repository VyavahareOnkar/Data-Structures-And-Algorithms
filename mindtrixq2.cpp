#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>g[i][j];


    int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    int ans = 0;
    vector<vector<bool>>dn(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // cout<<"ok  for "<<i<<" i "<<" j = "<<j<<endl;
            if(g[i][j]==0 || dn[i][j]){
                continue;
            }
            queue<pair<int,int>>q;
            int cans = 0;
            q.push({i,j});
            while (!q.empty())
            {
                int nn = q.size();
                while (nn--)
                {
                    pair<int,int>p = q.front();
                    q.pop();
                    cans++;
                    int x,y;
                    for(int i=0;i<4;i++){
                        x = p.first + dirs[i][0];
                        y = p.second + dirs[i][1];
                        if(x>=0 && x<n && y>=0 && y<m && !dn[x][y] && g[x][y]==1){
                            q.push({x,y});
                            dn[x][y] = true;
                        }
                    }
                }
                 
            }
            ans = max(ans,cans);
        }
    }
    cout<<ans<<endl;
}

int main(){
  
  int t;
  t = 1;

  while(t--)
    solve();
  return 0;
}