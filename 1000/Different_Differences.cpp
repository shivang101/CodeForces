#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// Shivang101

void solve()
{
    int k, n;
    cin >> k >> n;

    int arr[k]{0};

    set<int> st;
    st.insert(1);

    arr[0] = 1;
    bool flag = false;

    int inc = 1;
    int idx = -1;
    for (int i = 1; i < k; i++)
    {
        if (arr[i - 1] + inc <= n)
        {
            arr[i] = arr[i - 1] + inc;
            inc += 1;
            st.insert(arr[i]);
            idx = i;
        }
        else
        {
            flag = true;
            break;
        }
    }
    idx++;
    if (!flag)
    {
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        while (idx < k)
        {
            if (st.find(n) == st.end())
            {
                arr[idx] = n;
                idx++;
                st.insert(n);
                n--;
            }
            else
            {
                n--;
            }
        }
        sort(arr, arr + k);
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
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

    return 0;
}