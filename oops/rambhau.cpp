// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// void solve(){
//   int n;
//   ll k;
//   cin>>n>>k;
//   vector<ll>arr(n);
//   for(int i=0;i<n;i++)
//     cin>>arr[i];

//     ll cur = 0;
//     int cp = 0;

//     for(int i=0;i<n;i++){
//         cur += arr[i];
//         if(cur==k){
//             cout<<cp+1<<" "<<i+1<<endl;           
//             return;
//         }
//         if(cur>k){
//             while (cur>k && cp<=i){
//                 cur -= arr[cp++];
//             }
//         }
//         if(cur==k){
//             cout<<cp+1<<" "<<i+1<<endl;
//             return;
//         }
            
//     }
//     // cout<<"-1"<<endl;
// }

// int main(){
//   int t;
//   t = 1;
 
//   while(t--)
//     solve();
//   return 0;
// }







#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
  int n;
  ll k;
  cin>>n>>k;
  vector<ll>arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];

    ll cur = 0;
    int cp = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        cur += arr[i];

        if(cur>=k){
            while (cur>=k && cp<=i){
                cur -= arr[cp++];
            }
        }
        if(cur<k){
            int p = i - cp + 1;
            ans = max(ans,p);
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