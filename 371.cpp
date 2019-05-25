#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    long long L, H, i, j, seq, maxx, x, y, p, q, ans, temp;

    while(scanf("%lld%lld", &L, &H)==2){

            if(L==0 && H==0) break;

        maxx = 1;

        if(L>H){
            temp = L;
            L = H;
            H= temp;
        }

        for(i = L; i<=H; i++){
            p = i;
            x = i;
            seq = 0;

            while(1){
                if(p%2==0) p = p/2;

                else p = 3*p+1;

                seq++;

                if(p==1) break;


            }

            if(seq>maxx) {
                maxx = seq;
                ans = x;

            }


        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", L, H, ans, maxx);
    }
    return 0;
}
