#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define ff first
#define ss second
#define nn "\n"
#define sp " "
#define ll long long
#define loop(i, n, a) for (i = a; i < n; ++i)
#define dloop(i, n) for (i = n - 1; i > 0; --i)
#define all(s) s.begin(), s.end()
#define setp(n) fixed << setprecision(n)
#define setbits __builtin_popcount
#define bitsll  __builtin_popcount

typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef map<int, int> mi;
typedef map<ll, ll> ml;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef priority_queue<int> pqmax;
typedef priority_queue <int, vector<int>, greater<int>> pqmin;

template <typename T>
void input(vector<T> &v, ll n)
{
    ll i;
    T x;
    loop(i, n, 0)
    {
        cin >> x;
        v.pb(x);
    }
}

template <typename T>
void dsp(vector<T> &v, ll n, ll a=0)
{
    ll i;
    loop(i, n, a)
    {
        cout << v[i] << sp;
    }
    cout << nn;
}

const ll inf = 1e17 + 7;
const int infi = 1e9 + 7;
const ll mod = 1e9 + 7;
const ll N = (int)2e5 + 10;
const ll INF= 1ll<<32;

void solve()
{
    cout<<"HELLO_WORLD_123";
}

int main()
{
    fastio();
/*#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif*/
    ll t=1;
    cin>>t;
   // calc();
    while(t--)
   {
        solve();
       // cout<<nn;
    }
    return 0;
}

