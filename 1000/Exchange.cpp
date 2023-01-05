#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// Shivang101

void solve()
{
    lli n, s, g;
    cin >> n >> s >> g;
    if (s > g)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        std::cout << std::setprecision(0);
        cout << fixed << ceil(n / double(s)) << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
}