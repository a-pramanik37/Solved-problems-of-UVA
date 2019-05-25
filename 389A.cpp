///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define sc(n) scanf("%d", &n)
#define Aktaruzzaman using
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
Aktaruzzaman Pramanik


typedef pair<int, int>pii;

int a[cf];

int main()
{
    char ch;

    int ln, des, i, j, k, x, y, r, d;

    while(scanf("%d%d%d", &ln, &des, &k)==3){

        if(k%2==1){
                ch='L';
                i = (k/2)+1;
        }
        else {
                ch='R';
            i = k/2;
        }
        //cout<<i<<endl;

        if(i%des==0)r = i/des;
        else r = i/des+1;

        if(i%des==0)d = des;
        else d = i%des;

        printf("%d %d %c\n", r, d, ch);

    }
    return 0;
}
