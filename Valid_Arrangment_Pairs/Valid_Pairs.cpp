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

ll mod=1e9;

void dfs(ll node, vector<pair<int,int>>&res, unordered_map<int,int>& ot, unordered_map<int,vector<int>>&adj){
    while(ot[node]){
        ot[node]--;
        ll pr=adj[node][ot[node]];
        dfs(pr,res,ot,adj);
        res.pb({node,pr});
    }
}

vector<pair<int,int>>euler(unordered_map<int,int>& in, unordered_map<int,int>& ot, unordered_map<int,vector<int>>&adj){
    ll s=-1;
    vector<pair<int,int>>vp;
    for(auto pr: adj){
        if(ot[pr.first]-in[pr.first]==1){
            s=pr.first;
            break;
        }
        else if(ot[pr.first]>0){
            s=pr.first;
        }
    }
    dfs(s,vp,ot,adj);
    reverse(vp.begin(),vp.end());

    return vp;
}

void solve()
{
    ll n;
    cin>>n;

    unordered_map<int,int>in, ot;
    unordered_map<int,vector<int>>adj;

    for(int i=0; i<n; ++i){
        ll u, v;
        cin>>u>>v;
        adj[u].pb(v);
        ot[u]++; in[v]++;
    }
    vector<pair<int,int>>res=euler(in,ot,adj);
    if(res.size()!=n){
        cout(-1); return;
    }

    for(int i=0; i<res.size(); ++i){
        cout<<res[i].first<<" "<<res[i].second<<" ";
    }

    cout<<endl;


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