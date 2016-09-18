#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    set <string> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(s.find(a[i]) != s.end())
        {
            s.erase(a[i]);
            cout << a[i] << endl;
        }
    }
}
