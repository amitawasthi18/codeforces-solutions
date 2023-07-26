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
void solve()
{
 ll n;
 cin>>n;
 string s;
 cin>>s;
 string s1;
 s1=s;
 if(n&1)
 {
    cout<<-1<<nl;
    return;
 }
 reverse(all(s1));
 map<char,ll>mp1,mp2;
 f(i,0,n/2)
 {
    if(s[i] == s1[i])
    mp1[s[i]]++;
 }
  f(i,0,n)
 {
    mp2[s[i]]++;
 }
 ll c1=0;
 ll c2=0;
 ll c=0;
 for(auto i:mp1)
 {
    c += i.ss;
    c1=max(c1,i.ss);
 }
  for(auto i:mp2)
 {
    ll k=i.ss;
    c2=max(c2,k);
 }
 if(c2> n/2)
 {
    cout<<-1<<nl;
    return ;
 }
 if(2*c1>c)
 {
    cout<<c1<<nl;
    return;
 }
 ll res=c/2;
 res +=((c%2)==1);
 cout<<res<<nl;
}
int main()   
{        
    fast();
        Test{
            solve();
        }
}
