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

void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>>grid(n,vector<ll>(n));
    for(ll i=0; i<n; ++i){
        for(ll j=0; j<n; ++j) cin>>grid[i][j];
    }
    ll sz=64;
    ll cnt=0, total=0;


    for(ll i=0; i<n; ++i){
        for(ll j=i+1; j<n; ++j){
            cnt=0;
            for(ll z=0; z<(n/sz)+1; ++z){ 
                for(ll k=z*sz; k<min((z+1)*sz, n); ++k){ 
                    ll val = grid[i][k]&grid[j][k];
                    cnt += __builtin_popcountll(val); 
                }
            }


            total += (cnt * (cnt-1))/2;
        }
    }


    cout(total);
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
