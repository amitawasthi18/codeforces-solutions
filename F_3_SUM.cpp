#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
 
using namespace __gnu_pbds;
 
#define ll             long long
#define ull            unsigned long long
#define Test           ll t;cin>>t;while(t--)
#define pb             push_back
#define mpll           map<ll,ll>
#define vpll           vector<pair<ll,ll>>
#define vll            vector<long long>
#define ff             first
#define ss             second
#define sz(x)          (long long int)(x).size()
#define nl            "\n"
#define mem(a,x)        memset(a,x,sizeof(a))
#define precise(n,a)   cout<<fixed<<setprecision(n)<<a
#define in             insert
#define b_s            binary_search
#define lb            lower_bound
#define ub            upper_bound
#define all(v)         v.begin(),v.end()
#define setbits(n)         __builtin_popcount(n)
#define dbs(n)          bitset<32>(n).to_string()
#define uniq(v)        (v).erase(unique(all(v)),(v).end())
#define f(i, a, b)    for (long long int i = (a); i<(b); ++i)
#define rf(i, b, a)   for (long long int i = (b)-1; i>=(a); --i)
 
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>
 
const double pi=    3.14159265358979323846;
const ll mod = 1e9+7;


void solve()
{
  ll n;
  cin>>n;
  vll v(n);
  vll v1(n);
  mpll mp;
  f(i,0,n)
  {
  cin>>v[i];
  v1.pb(v[i]%10);
  }
  ll n1=sz(v1);
  f(i,0,n1)
  {  
    mp[v1[i]]++;
  }
  
  vector<pair<ll, ll>> vp;
  for(auto pr:mp)
  {  vp.push_back({pr.first , pr.second});

  }
  ll i,j,k,l;
  for(i=0;i<vp.size();i++)
  {   int val=3*vp[i].first;
       if(val%10==3 && vp[i].second>=3)
          {  cout<<"YES\n"; return;

          }
  }

  for(i=0;i<vp.size();i++)
  {   for(j=0;j<vp.size();j++)
      {  int val=2*vp[i].first + vp[j].first;
          if(val%10==3 && vp[i].second>=2)
          {  cout<<"YES\n"; return;

          }

      }

  }

  for(i=0;i<vp.size();i++)
  {  for(j=0;j<vp.size();j++)
  {   for(k=0;k<vp.size();k++)
     {   int val=vp[i].first+vp[j].first+vp[k].first;
          if(val%10==3 && vp[i].first!=vp[j].first  && vp[j].first!=vp[k].first)
          {  cout<<"YES\n"; return;

          }

     }

  }

  }
   cout<<"NO\n"; return;


}
int main()   
{        
        Test{
            solve();
        }
}
