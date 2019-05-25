#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int t, h, m, i, j, ans1, ans2;

    scanf("%d", &t);

    for(i = 1; i<=t; i++){
        scanf("%d:%d", &h, &m);


        if(h==12 && m==0){
                ans1=12;
                ans2 = 0;
        }

        else{

           if(h==11 || h==12){
            if(h==11) ans1=12;
            else ans1=11;

            ans2 = 60-m;
            if(ans2==60) ans2=0;
           }

           else{
            ans1 = 11-h;

            ans2 = 60-m;

            if(ans2==60) ans2=0;
           }
        }

        if(ans1<10 || ans2<10){

            if(ans1<=10 && ans2>9) printf("0%d:%d\n", h, m);
            else if(ans1>9 && ans2<10) printf("%d:0%d\n", h, m);
            else printf("0%d:0%d\n", h,m);

        }

        else printf("%d:%d\n", h, m);


    }
    return 0;

}
