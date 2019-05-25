//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
string a;
int b[10];
int main()
{
    while(cin>>a){

        if(a.size()%2==1)printf("-1\n");

        else{
            mem(b, 0);
            for(int i=0; i<a.size(); i++){
                if(a[i]=='L')b[1]++;
                else if(a[i]=='R')b[2]++;
                else if(a[i]=='U')b[3]++;
                else b[4]++;
            }

            int p = b[1]-b[2];
            int q = b[3]-b[4];
            int ans = abs(p)+abs(q);
            printf("%d\n", ans/2);
        }
    }
    return 0;
}
