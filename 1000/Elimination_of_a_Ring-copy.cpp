#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// Shivang101

void solve()
{

    int n;
    cin >> n;

    int arr[n]{0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[(i - 1 + n) % n] != arr[(i + 1) % n])
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << n << endl;
        return;
    }
    else
    {
        cout << n / 2 + 1 << "\n";
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

    return 0;
}