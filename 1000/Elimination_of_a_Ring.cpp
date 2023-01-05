#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// Shivang101

void solve()
{
    int n;
    cin >> n;
    int N = n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x] += 1;
    }

    priority_queue<int> pq;
    for (auto x : mp)
    {
        pq.push(x.second);
    }

    int maxAllowed_freq = N / 2;
    int deletions = 0;
    while (pq.size() > 1)
    {
        int top = pq.top();
        pq.pop();
        if (top > maxAllowed_freq)
        {
            deletions++;
        }
        // cout << "top = " << top << " max_freqa = " << maxAllowed_freq << " del = " << deletions << endl;
        top--;
        if (top > 0)
        {
            pq.push(top);
        }
        N--;
        maxAllowed_freq = N / 2;
    }
    // cout << "herer" << endl;
    cout << n - deletions << endl;
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

    return 0;
}