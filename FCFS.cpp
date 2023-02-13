#include<bits/stdc++.h>
using namespace::std;
#define pb push_back
#define pob pop_back

int main()
{
    typedef vector<int> vi;
    typedef long long ll;
    typedef pair<int,int> pi;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    queue<int> g1;
    cin>>n;
    vi a(n),b(n),c(n),t(n),w(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        g1.push(b[i]);
    }
    int time=a[0];
    for(int i=0;i<n;i++)
    {
    time+=g1.front();
    g1.pop();
    c[i]=time;
    t[i]=c[i]-a[i];
    w[i]=t[i]-b[i];
    }


    cout<<"PID  AT  BT  CT  TAT  WT  RT"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<i+1<<"   "<<a[i]<<"   "<<b[i]<<"   "<<c[i]<<"    "<<t[i]<<"   "<<w[i]<<"   "<<w[i]<<endl;
    }

    return 0;
}
