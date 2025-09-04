#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define ll long long

#define vi vector<int>
#define vll vector<ll>
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
#define vecout(v) for (auto _ : v) cout << _ << ' '; cout << endl;

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

int solver(int num){
    int arr[10]={0};
    while(num>0){
        int rem = num%10;
        if(++arr[rem] == 2) return 0;
        num/=10;
    }
    return 1;
}

int main() {
    fastio;
    
    int n;
    cin>>n;

    for(int i=n+1; i<10000; i++){
        if(solver(i)){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}