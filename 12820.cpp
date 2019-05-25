#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define LL long long int
#define uLL unsigned long long int
#define s1(a) scanf("%d",&a)
#define s2(a,b) scanf("d",&a,&b)
#define s3(a,b,c) scanf("d%d",&a,&b,&c)
#define sLL1(a) scanf("%lld",&a)
#define sLL2(a,b) scanf("lld",&a,&b)
#define sLL3(a,b,c) scanf("lld%lld",&a,&b,&c)
#define sc(a) scanf("%c",&a)
#define p(a) printf("%d",a)
#define pLL(a) printf("%lld\n",a)
#define ps(a) printf("%s\n", a)
#define pb push_back
#define casep(cc) printf("Case %d:",cc++)
#define casep2(cc) printf("Case %d:\n", cc++)

char a[100];

int main()

{

    vector<int>b;

    int ar[26];
    int n, j, k, cnt, c, i, x;

    scanf("%d", &n);

    int cc = 1;


    while(scanf("%d ", &n)!=EOF){
            /*getchar();*/
        cnt = 0;
        for(x = 1; x<=n; x++){
            scanf("%s", a);


            k = 0;
            memset(ar, 0, sizeof ar);
            for(i = 0; i<strlen(a); i++){
                    if(ar[a[i]-'a']==0) k++;

                ar[a[i]-'a']++;
            }
            if(k>1){
                for(i = 0; i<26; i++){
                    if(ar[i]>0){
                        b.push_back(ar[i]);
                    }
                }
               int flg = 0;
                for(i = 0; i<b.size(); i++){
                    for(j = 0; j<b.size(); j++){
                        if(i!=j){
                            if(b[i]==b[j]){
                                flg = 1;
                                break;
                            }
                        }

                    }

                }
                if(flg==0) cnt++;
                b.clear();
            }
        }

        casep(cc);
        printf(" %d\n", cnt);

    }
    return 0;
}
