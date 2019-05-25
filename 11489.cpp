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

char a[1005];

int main()

{
        int t, n, i, j, k;

        scanf("%d", &t);
        int cc = 0;
        while(t--)
        {
            scanf("%s", a);
            int sum = 0;
            for(i=0; i<strlen(a); i++){
                sum+=a[i]-'0';
            }

            int cnt=0;
            for(i=0; i<strlen(a); i++){
                    int x = sum-(a[i]-'0');
                if(x%3==0 && x!=0){
                    sum-=(a[i]-'0');

                    cnt++;
                }
            }
            printf("Case %d: ",++cc);
            if(cnt==0)printf("S\n");
            else if(cnt%2==1)printf("S\n");
            else printf("T\n");
        }
        return 0;
}
