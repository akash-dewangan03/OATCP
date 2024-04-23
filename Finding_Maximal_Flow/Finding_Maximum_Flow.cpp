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

ll bfs(ll src, ll des, vector<int>&par, vector<vector<int>>&adj){
    ll V=adj.size();
    fill(par.begin(),par.end(),-1);
    queue<int>q;
    q.push(src);
    par[src]=-2;

    while(!q.empty()){
        ll f=q.front();
        q.pop();

        for(ll i=0; i<V; ++i){
            if(f!=i and par[i]==-1 and adj[f][i]!=0){
                par[i]=f;
                ll mn=min(INT_MAX,adj[f][i]);
                if(i==des) return mn;
                q.push(i);
            }
        }
    }
    return 0;
}

ll fordFulk(ll src, ll des, vector<vector<int>>&adj){
    ll V = adj.size();
    vector<vector<int>>arr=adj;
    vector<int>par(V,-1);
    ll flg = 0;
    ll flw=0;
    while(flg = bfs(src,des,par,arr)){
        flw+=flg;
        ll f = des;

        while(f!=src){
            ll s = par[f];
            arr[f][s]+=flg;
            arr[s][f]-=flg;
            f=s;
        }
    }


    return flw;

}


void solve()
{
    ll n;
    cin>>n;
    ll src, des;
    cin>>src>>des;
    src--; des--;
    vector<vector<int>>adj(n, vector<int>(n,0));
    ll n1, n2, wt;
    while(cin>>n1>>n2>>wt){
        n1--; n2--;
        adj[n1][n2]=wt;
    }

    auto timeSt = chrono::high_resolution_clock::now();
    cout << fordFulk(src,des,adj) << "\n";
    auto timeEn = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::milliseconds>(timeEn-timeSt);
    
    cout(duration.count());


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