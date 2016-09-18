#include <bits/stdc++.h>

using namespace std;

int cmp(pair <int, int> n, pair <int, int> m)
{
    return n.second < m.second;
}


int main()
{
    int n, w, a, b;
    cin >> n >> w >> a >> b;
    pair <int, int> p[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &p[i].first, &p[i].second);
        p[i].second = p[i].first * a + p[i].second * b;
        p[i].first = i + 1;
    }
    sort(p, p + n, cmp);
    int c[n];
    memset(c, 0, sizeof(c));
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(w >= p[i].second)
        {
            c[p[i].first - 1] = 1;
            w -= p[i].second;
            cnt++;
        }
        else break;
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++)
    {
        if(c[i])cout << i + 1 << " ";
    }
}
