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
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
ll fastpow(ll base, ll exp)
{
    ll ans=1;
    while(exp>0)
    {
        if(exp&1)
            ans=(ans*base);
 
        base=(base*base);
        exp/=2;
    }
    return ans;
}
void solve()
{
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  ll p1=-1,p2=-1;
  ll c1=0;
  f(i,0,sz(s))
  {
      c1+=(s[i]=='1');
  }
  f(i,0,sz(s))
  {
      if(s[i]=='1')
      {
          p1=i;
          break;
      }
  }
  f(i,0,sz(s))
  {
      if(s[i]=='1')
      {
          p2=i;
      }
  }
  ll ans=0;
  if(c1&&(k>=(n-1-p2))&&p2!=-1)
  {
      k-=(n-1-p2);
      c1--;
      ans+=1;
  }
  if(c1&&k>=p1&&p1!=-1)
  {
      k-=(p1);
      c1--;
      ans+=10;
  }
  ans+=(c1*(11LL));
  cout<<ans<<nl;

}
int main()   
{        
    fast();
        Test{
            solve();
        }
}
