#include <bits/stdc++.h>
using namespace ::std;
#define pb push_back
#define pob pop_back
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    queue<int> g1;
    cin >> n;
    vi a(n), b(n), c(n), t(n), w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // taking input

    vpii d(n);
    for (int i = 0; i < n; i++)
    {
        d[i].first = a[i];
        d[i].second = b[i];
    }
    sort(d.begin(), d.end());
    // sorted the process by primary key arrival time and secondary key burst time
    
    for (int i = 0; i < n; i++)
    {
        a[i] = d[i].first;
        b[i] = d[i].second;
        g1.push(b[i]);
    }
    //pushing all elements in queue

    int time = a[0] + g1.front();

    for (int i = 0; i < n;)
    {
        c[i] = time;
        t[i] = c[i] - a[i];
        w[i] = t[i] - b[i];
        i++;
        if (a[i] > time)
        {
            time = a[i] + b[i];
        }
        else
        {
            time += b[i];
        }
        g1.pop();

        // time=max of arrival or burst after every process completion
    }

    cout << "PID  AT  BT  CT  TAT  WT  RT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "  " << i + 1 << "   " << a[i] << "   " << b[i] << "   " << c[i] << "    " << t[i] << "   " << w[i] << "   " << w[i] << endl;
    }

    return 0;
}
