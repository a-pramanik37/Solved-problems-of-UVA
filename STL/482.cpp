#include<bits/stdc++.h>
#define sc(x) scanf("%lld",&x)
#define pr printf
#define co(x) cout<<x<<endl
#define pr printf
#define ci(x) cin>>x>>endl
#define gc() getchar()
#define el else if
#define f(i,p,n) for(i=p;i<=n;i++)
#define ll long long
using namespace std;
int main()
{
    string a[10009];
    int i, j;

    for(i=1; i<=3; i++){
        cin>>a[i];
    }

    for(i=1; i<3; i++){
            for(j=i+1; j<=3; j++){
                if(a[i]>a[j])swap(a[i], a[j]);
            }
    }

    for(i=1; i<=3; i++)cout<<a[i]<<endl;


    return 0;


}
