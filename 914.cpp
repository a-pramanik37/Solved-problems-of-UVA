#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;



int main()

{
    int a[1000005], prime[100005], b[100005];
    int  i, j, k,l ,u, coun, t, x, y, ind1, ind2, p ,ans;
    memset(a, 0, sizeof a);
    a[0]=1;
    a[1]=1;

    for(i = 2; i<=1000005; i++){
        if(a[i]==0){

            for(j = i*2; j<=1000005; j = j+i){
                a[j]=1;
            }
        }
    }

    scanf("%d", &t);
    while(t--){


        scanf("%d%d", &l, &u);

        k = 1;
        for(i = l; i<=u; i++){
            if(a[i]==0){
                prime[k] = i;   //storing the prime numbers//
                k++;
            }
        }
        p = k-1;  //assigning the last index of the array 'prime'//

        memset(b, 0, sizeof b);

        int maxx = 0;

        int flg = 0;
        ind1 = 0;
        ans = 0;

        for(i = 2; i<=p; i++){
            b[prime[i]-prime[i-1]]++; //counting the appearences of a Jumping Champion//

            x = b[prime[i]-prime[i-1]];  //assigning the number of appearence(s) in x//

            if(ind1 <(prime[i]-prime[i-1])) ind1 = prime[i]-prime[i-1]; //finding the largest Jumping champion//

            if(x>=maxx){
                maxx = x;
                ans = prime[i]-prime[i-1]; //finding beshibar asha jumping champion//
            }
        }
        coun = 0;

        for(i = 1; i<=ind1; i++){
            if(b[i]>=maxx){
                coun++;
                if(coun>1){  //finding whether we have two jumping champion making the same(maximum) number of appearencess or not//
                    flg = 1;
                    break;
                }
            }
        }

        if(flg==1 || ans==0) printf("No jumping champion\n"); //flg==1 ==> ekhadhik jumping champion ace & ans=0 ==> 2 tar kom prime number cilo//

        else printf("The jumping champion is %d\n", ans);

    }
    return 0;
}
