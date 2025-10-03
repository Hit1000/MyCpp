#include <iostream>
#include <numeric> // for std::lcm in C++17
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    auto count = [&](int x) { return d / x; };

    int a = count(k);
    int b = count(l);
    int c = count(m);
    int e = count(n);

    int ab = count(lcm(k, l));
    int ac = count(lcm(k, m));
    int ae = count(lcm(k, n));
    int bc = count(lcm(l, m));
    int be = count(lcm(l, n));
    int ce = count(lcm(m, n));

    int abc = count(lcm(k, lcm(l, m)));
    int abe = count(lcm(k, lcm(l, n)));
    int ace = count(lcm(k, lcm(m, n)));
    int bce = count(lcm(l, lcm(m, n)));

    int abce = count(lcm(k, lcm(l, lcm(m, n))));

    int damaged = a + b + c + e
                - ab - ac - ae - bc - be - ce
                + abc + abe + ace + bce
                - abce;

    cout << damaged << endl;
    return 0;
}









// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// #define ll long long

// #define vi vector<int>
// #define vll vector<ll>
// #define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;
// #define vecout(v) for (auto _ : v) cout << _ << ' '; cout << endl;

// #define pii pair<int, int>
// #define pll pair<ll, ll>

// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()

// #define rep(i, a, b) for(int i = a; i < b; i++)
// #define repr(i, a, b) for(int i = a; i >= b; i--)

// #define debug(x) cerr << #x << " = " << x << '\n'

// const int MOD = 1e9 + 7;
// const int INF = 1e9;
// const ll LLINF = 1e18;


// int main() {
//     fastio;
//     int k,l,m,n,d;
//     cin>>k>>l>>m>>n>>d;
//     int count = 0;
//     if(k==1 || l==1 || m==1 || n==1){
//         cout<<d;
//         return 0;
//     }
//     for(int i=1; i<=d; i++){
//         if((i%k==0) || (i%l == 0) || (i%m == 0) || (i%n == 0)) 
//             count++;
//     }
    
//     cout<<count;
//     return 0;
// }