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
int a[cf];
int main()
{
    int n, i, j, k;
    while(scanf("%d", &n)==1){

        int carry=0;
        int sz=1;
        a[0]=1;

        for(i=2; i<=n; i++){

            for(j=0; j<sz; j++){
                k = a[j]*i+carry;
                a[j]=k%10;
                carry=k/10;
            }

            while(carry>0){
                a[sz]=carry%10;
                carry/=10;
                sz++;
            }


        }

        int ans=0;
        for(i=0; i<sz; i++)ans+=a[i];
        printf("%d\n", ans);

    }
    return 0;
}
