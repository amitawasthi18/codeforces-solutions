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
  void dfs(ll row,ll col , vector<vector<ll>> &grid , vector<vector<ll>> &vis,ll &area,ll n,ll m)
    {
        area=area+grid[row][col];
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        for(ll i=0;i<4;i++)
        {
            ll nrow=row+delrow[i];
            ll ncol=col+delcol[i];

            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]>0 and vis[nrow][ncol]==0 )
            {
                dfs(nrow,ncol,grid,vis,area,n,m);
            }
        }
    }
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>v;
    for(ll i=0;i<n;i++)
    {
        vll v1;
        f(j,0,m) 
        {
            ll x;
            cin>>x;
            v1.pb(x);
        }
        v.pb(v1);
    }
   ll ans=0;
        vector<vector<ll>> vis(n, vector<ll>(m,0));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]>0 and vis[i][j]==0)
                {
                    ll area=0;
                    dfs(i,j,v,vis,area,n,m);
                    ans=max(area,ans);
                }

            }
        }
        cout<<ans<<nl;
}
int main()   
{        
    fast();
        Test{
            solve();
        }
}
