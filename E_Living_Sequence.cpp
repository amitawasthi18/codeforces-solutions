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
string fact (int n)
{
    int q=2;
    int v[100000]={0};
    v[0]=1;
   int x=0;
    int len=1;
    int num=0;
    while(q<=n)
    {
        x=0;
        num=0;
        while(x<len)
        {
            v[x]=v[x]*q;
            v[x]=v[x]+num;
            num=v[x]/10;
            v[x]=v[x]%10;
            x++;
        }
        while(num!=0)
        {
            v[len]=num%10;
            num=num/10;
            len++;
        }
        q++;
    }
    len--;
    string s="";
    while(len>=0)
    {
        s+=('0'+v[len]);
        len--;
    }
    return s;
}
ll fn(ll n)
{
    vll v;
    ll k=0;
    while(n>0)
    {
        v.pb(n%9);
        n=n/9;
    }
    reverse(all(v));
    for ( auto i :v)
    {
        k=k*10 + i;
    }
    return k;
}
void solve()
{
  string s;
  cin>>s;
   ll n=stoll(s);
    s = to_string(fn(n));
   f(i,0,sz(s))
   {
    if(s[i] == '8')
    s[i] = '9';
   }
   f(i,0,sz(s))
   {
    if(s[i] == '7')
    s[i] = '8';
   }
   f(i,0,sz(s))
   {
    if(s[i] == '6')
    s[i] = '7';
   }
   f(i,0,sz(s))
   {
    if(s[i] == '5')
    s[i] = '6';
   }
   f(i,0,sz(s))
   {
    if(s[i] == '4')
    s[i] = '5';
   }
   cout<<s<<nl;
}
int main()   
{        
    fast();
        Test{
            solve();
        }
}
