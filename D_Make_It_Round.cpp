#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define Test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define pb push_back
#define mpll map<ll, ll>
#define vpll vector<pair<ll, ll>>
#define vll vector<long long>
#define ff first
#define ss second
#define sz(x) (long long int)(x).size()
#define nl "\n"
#define mem(a, x) memset(a, x, sizeof(a))
#define precise(n, a) cout << fixed << setprecision(n) << a
#define in insert
#define b_s binary_search
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define setbits(n) __builtin_popcount(n)
#define dbs(n) bitset<32>(n).to_string()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define f(i, a, b) for (long long int i = (a); i < (b); ++i)
#define rf(i, b, a) for (long long int i = (b)-1; i >= (a); --i)

#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>

const double pi = 3.14159265358979323846;
const ll mod = 1e9 + 7;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
ll fastpow(ll base, ll exp)
{
    ll ans = 1;
    while (exp > 0)
    {
        if (exp & 1)
            ans = (ans * base);

        base = (base * base);
        exp /= 2;
    }
    return ans;
}
string fact(int n)
{
    int q = 2;
    int v[100000] = {0};
    v[0] = 1;
    int x = 0;
    int len = 1;
    int num = 0;
    while (q <= n)
    {
        x = 0;
        num = 0;
        while (x < len)
        {
            v[x] = v[x] * q;
            v[x] = v[x] + num;
            num = v[x] / 10;
            v[x] = v[x] % 10;
            x++;
        }
        while (num != 0)
        {
            v[len] = num % 10;
            num = num / 10;
            len++;
        }
        q++;
    }
    len--;
    string s = "";
    while (len >= 0)
    {
        s += ('0' + v[len]);
        len--;
    }
    return s;
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    ll z = 1;
    while (z < m)
    {
        if (y > 0)
        {
            if (z * x <= m)
                z *= x;
            else
            {
                lli ttt = m / z;
                z *= ttt;
                break;
            }
            y--;
        }
        else
        {
            if (z * 10 <= m)
                z *= 10;
            else
            {
                lli ttt = m / z;
                z *= ttt;
                break;
            }
        }
        if (z * n == 0 || z > m)
            cout << n * m << nl;
        else
            cout << z * n << nl;
    }
}
}
int main()
{
    fast();
    Test
    {
        solve();
    }
}
