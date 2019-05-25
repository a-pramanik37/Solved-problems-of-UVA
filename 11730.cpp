#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int s, t, i, j, x, b[104], a[105], coun, minn,c = 0, k, sum;
    memset(a, 0, sizeof a);

    for(i = 2; i<=100; i++){
        if(a[i]==0){
            for(j = i*2; j<=100; j=j+i){
                a[j]  =1;
            }
        }
    }

    while(scanf("%d%d", &s, &t)==2 && s!=0 && t!=0){
            c++;
            x = t-s;

        for(i=2, k=1; i<=s; i++){
            if(s%i==0 && a[i]==0 && s!=i){
                b[k] = i;
                k++;
            }
        }
        minn = 999999;
        int flg = 0;
        for(j = k-1; j>=1; j--){


            sum = 0;
            coun = 0;
            for(i = b[j]; ;i=i){
                sum = sum+i;
                coun++;
                if(sum>x) break;
                if(sum==x){

                   /*if(coun<minn) minn=coun;*/

                    flg =1;
                    break;

                }

            }
        }

        if(flg==1) printf("Case %d: %d\n", c, minn);
        else printf("Case %d: -1\n", c);

    }

}
