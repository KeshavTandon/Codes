#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    set<pair<int, int>> left;
    set<pair<int, int>> right;
    vector<int> values(n);
    for (int i = 0; i < n; i++)
        cin >> values[i];
    if (k == 1)
    {
        cout << values[0];
        return 0;
    }
    if (k == 2)
    {
        cout << min(values[0], values[1]);
        return 0;
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < k; i++)
        v.push_back({values[i], i});

    sort(v.begin(), v.end());

    for (int i = 0; i < k / 2 + (k % 2); i++)
        left.insert(v[i]);

    for (int i = k / 2 + (k % 2); i < k; i++)
        right.insert(v[i]);

    auto t = left.rbegin();
    cout << t->first << " "; // first median of window is printed

    // now we have to print median of rest of the windows
    for (int i = 1; i < n - k + 1; i++)
    {
        if (left.count({values[i - 1], i - 1}))
            left.erase({values[i - 1], i - 1}); // erasing the previous element if its in left set
        else
            right.erase({values[i - 1], i - 1}); // erasing the previous element if its in right set

        if (*(left.rbegin()) < make_pair(values[k - 1 + i], k - 1 + i))
            right.insert(values[k - 1 + i], k - 1 + i);
        else
            left.insert(values[k - 1 + i], k - 1 + i);

        while ((int)left.size() < k / 2 + (k % 2)) // left set has less element
        {
            pair<int, int> z = (*right.begin());
            left.insert(z);
            right.erase(z);
        }
        while ((int)left.size() > k / 2 + (k % 2)) // left set has more elements
        {
            pair<int, int> z = (*left.rbegin());
            left.erase(z);
            right.insert(z);
        }
        cout << left.rbegin()->first << " ";
    }
}