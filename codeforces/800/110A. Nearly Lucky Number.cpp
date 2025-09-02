#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repr(i, a, b) for(int i = a; i >= b; i--)
#define debug(x) cerr << #x << " = " << x << '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;


int main() {
    fastio;
    
    ll n;
    cin>>n; 

    int count = 0;
    bool flag = 0;

    while(n>0){
        int rem = n%10;
        if(rem == 7 || rem == 4) ++count;
        n/=10;
    }

    cout<<((count == 7 || count == 4)?"YES":"NO")<<endl;
    
    return 0;
}