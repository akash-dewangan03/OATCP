#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define dob double
#define cout(x) cout<<x<<endl
#define vec(type1, name) vector<type1> name
#define vecp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define map(type1, type2, name) map<type1, type2> name
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define xin() for(ll i=0;i<n;++i) cin>>x[i]
#define xout() for(ll i=0;i<n;++i) cout<<x[i]<<" "
#define forl(i,a,b) for(ll i=a;i<b;++i)
#define forll(i,a,b) for(ll i=a;i<=b;++i)
// factorial | lcm | palindrome | power | prime | prime factor | sieveprime

ll mod=1e9+7;
void solve()
{
    ll n; cin>>n;
    char ch[n][n];
    forl(i,0,n){
        forl(j,0,n) cin>>ch[i][j];
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    dp[0][0]=1;
    forl(i,0,n){
        forl(j,0,n){
            if(ch[i][j]=='*') dp[i][j]=0;
            else{
                if(i>0){
                    dp[i][j]+=dp[i-1][j];
                    dp[i][j]%=mod;
                }
                if(j>0){
                    dp[i][j]+=dp[i][j-1];
                    dp[i][j]%=mod;
                }
            }
        }
    }
    if(n<=0) cout(-1);
    else cout(dp[n-1][n-1]%mod);


  return;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll T = 1;
//   cin >> T;
  while(T--){
     solve();
  }
}