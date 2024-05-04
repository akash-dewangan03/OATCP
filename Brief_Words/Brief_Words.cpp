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

void genSubs(ll len, ll n, string& s, unordered_set<string>& sub){
    string ss="";
    ll cnt=0;
    for(int i=1; i<len+1; ++i){
        for(int j=0; j<n-i+1; ++j){
            ss=""; cnt=0;
            for(int k=j; k<n; ++k){
                if(cnt>=i) break;
                ss+=s[k];
                cnt++;
            }
            sub.insert(ss);
        }
    }

}

unordered_map<string,string> solve(vector<string>& str){
    unordered_map<string,string>mp;
    unordered_set<string>st;

    for(auto& pr: str){
        if(pr.size()<=4){
            mp[pr]=pr;
            st.insert(pr);
            continue;
        }
        unordered_set<string>sub;
        genSubs(4,pr.size(),pr,sub);

        for(auto sbs: sub){
            if(st.find(sbs)==st.end()){
                mp[pr]=sbs;
                st.insert(sbs);
                break;
            }
        }


        if(mp.find(pr)==mp.end()){
            cout<<"No unique short form found for word: "<<pr<<endl;
        }
    }
    
    return mp;

}


void solve()
{

    ll n;
    cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; ++i) cin>>str[i];

    auto val = solve(str);
    for(auto pr: val){
        cout<<pr.first<<" -> "<<pr.second<<endl;
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