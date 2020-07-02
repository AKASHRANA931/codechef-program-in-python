#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef map<int,int> mapii;
typedef map<int,bool> mapib;
typedef map<char,int> mapci;
typedef priority_queue<int> pr;

#define small 1e-9
#define big5 1000000005
#define big7 1000000007
#define big 100000
#define pi 3.1415926

#define inp(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define cum(arr,n,cumm) cumm[0]=arr[0];for(int i=1;i<n;i++)cumm[i]=cumm[i-1]+arr[i];
#define bsdk ios_base::sync_with_stdio(false);cin.tie(NULL);
#define disp(arr) for(auto i:arr)cout<<i<<" ";cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yess cout<<"Yes\n"
#define noo cout<<"No\n"
#define m1 cout<<"-1\n"
#define nl <<endl
#define hs cout<<"#"

#define fori(a, b, c) for (a = (b); (a) <= (c); ++(a))
#define ford(a, b, c) for (a = (b); (a) >= (c); --(a))
#define rep(i,n) fori(i,0,n-1)
#define repi(i,n) fori(i,1,n-1)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pob pop_back
#define ub upper_bound
#define lb lower_bound
#define allv(v) v.begin(), v.end()
#define sorti(v) sort(allv(v))
/*bool isprime[big+1];
vector<int> primes;
void makesieve()
{
    ll i,j;
    rep(i,big+1)
        isprime[i]=false;
    isprime[2]=true;
    for(i=3;i<=big;i+=2)
        isprime[i]=true;
    for(i=3;i<=big;i+=2)
    {
        if(isprime[i])
            for(j=i*i;j<=big;j+=i)
            isprime[j]=false;
    }
    rep(i,big+1)
    {
        if(isprime[i])
            primes.pb(i);
    }
}
vpi fact(ll n)
{
    ll i=0;
    vpi pf;
    ll c;
    while(primes[i]*primes[i]<=n)
    {
        if(n%primes[i]==0)
        {
            c=0;
            while(n%primes[i]==0)
                {
                    n=n/primes[i];
                    c++;
                }
            pf.pb(mp(primes[i],c));
        }
        i++;
    }
    if(n!=1)
        pf.pb(mp(n,1));
    return pf;
}
ll poww(ll n,ll m){
    if(m==0)return 1;
    if(m==1)return n;
    ll ans = poww(n,m/2);
    if(m%2==1) return (ans*ans)*n;
    else return (ans*ans);
}*/
void solve()
{
    ll n;
    cin>>n;
    if(n%2!=0)
        n++;
    cout<<n/2 nl;
}
int main()
{
    bsdk
    int t;
    cin>>t;
    //t=1;
    //makesieve();
    while(t--) solve();
    return 0;
}
