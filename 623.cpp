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
        int sz, i, j, k, n, carry,x;
        while(scanf("%d", &n)==1){

            a[0]=1;
            sz=1;
            carry=0;
            for(i=1; i<=n; i++){

                for(j=0; j<sz; j++){
                     x = a[j]*i+carry;
                    a[j]=x%10;
                    carry = x/10;
                }

                while(carry>0){
                    a[sz]=carry%10;
                    carry=carry/10;
                    sz++;
                }

            }
            printf("%d!\n",n);
            for(i=sz-1; i>=0; i--)printf("%d",a[i]);
            printf("\n");

        }
        return 0;
}
