#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define forn(i, n) for (int i = 0; i < n; ++i) 
#define endl '\n'
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,q,l,r;
    long long a;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        vector<long long>b;
        cin>>n;
        for (int j = 0; j <n ; j++)
        {
            cin>>a;
            b.push_back(a);
        }
        cin>>q;
        long long c = long (b.size());
        vector<long long> prefix_sum(c + 1);
        prefix_sum[0] = 0;
        for (int x = 0; x < c; x++)
        {
            prefix_sum[x + 1] = prefix_sum[x] + b[x];
        }
        for (int k = 0; k < q; k++)
        {
            cin>>l;
            cin>>r;
            cout << prefix_sum[r] - prefix_sum[l - 1] << '\n';

        }
    }
    return 0;
}