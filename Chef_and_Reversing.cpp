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
const ll N=1e5+5;
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
vector<pair<int,int>>v[N];
vector<int>lev(N,INT_MAX);
int n,m;
void bfs()
{
   deque<int>q;
    q.push_back(1);
    lev[1]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop_front();
        for(auto childs:v[curr])
        {
           int child=childs.ff;
           int wt=childs.ss;
            if(lev[curr]+wt<lev[child])
            {
                lev[child]=lev[curr]+wt;
            if(wt==0)
            {
                q.push_front(child);
            }
            if(wt==1)
            {
                q.push_back(child);
            }
            }
        }
    }
    if(lev[n]==INT_MAX)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<lev[n]<<endl;
}
void solve()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
       int x,y;
       cin>>x>>y;
       if(x==y)
       continue;
       v[x].push_back({y,0});
       v[y].push_back({x,1});
    }
    bfs();
    
    
}
int main()   
{        
    fast();
       // Test{
            solve();
       // }
}
