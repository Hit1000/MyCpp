#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define eb emplace_back // faster than push_back
#define pn cout << "NO"<< "\n";
#define py cout << "YES"<< "\n";
// #define fl(i, n)  for (int i = 0; i < n; i++);
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
using namespace std;

class Compare
{
public:
    bool operator()(pair<int, int> x, pair<int, int> y)
    {
        if (x.first != y.first)
            return x.first < y.first;
        return x.second > y.second;
    }
};

void solve()
{

        int n, cnt=2, i=3;
        cin >> n;
        vector<int> ans(n, 1);
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            v[i] = make_pair(a, i);
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> q;
        if(n>1){
            q.push(v[1]);
        }
        if(n>2){
            q.push(v[2]);
        }
        while(!q.empty()){
            auto z = q.top();
            q.pop();
            ans[z.second] = cnt;
            cnt++;
            if(i<n){
                q.push(v[i]);
                i++;
            }
            if(i<n){
                q.push(v[i]);
                i++;
            }
        }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    fastread();
    ll t = 1;
   cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}