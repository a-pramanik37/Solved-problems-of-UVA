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
    int digit[10], lower[26], upper[26], i, j, k, t, x, prm[2002];

    char a[2050];


    for(i = 2; i<=2002; i++){
        if(prm[i]==0){

            for(j = i*2; j<=2002; j=j+i){
                prm[j]=1;
            }
        }
    }
    prm[0]=1;
    prm[1]=1;

    scanf("%d", &t);

    for(x =1; x<=t; x++){

        scanf("%s", a);

        memset(digit, 0, sizeof digit);
        memset(upper, 0, sizeof upper);
        memset(lower, 0, sizeof lower);


        for(i=0; i<strlen(a); i++){

            if(a[i]>=48 && a[i]<=57){
                digit[(a[i]-'0')]++;
            }

            else if(a[i]>=65 && a[i]<=90){
                upper[(a[i]-'A')]++;
            }

            else if(a[i]>=97 && a[i]<=122){
                lower[(a[i]-'a')]++;
            }

        }

        int flg =0;

        printf("Case %d: ", x);

        for(i = 0; i<10; i++){
            if(prm[digit[i]]==0){
                flg = 1;
                printf("%c", i+'0');
            }
        }

        for(i = 0; i<26; i++){
            if(prm[upper[i]]==0){
                flg = 1;
                printf("%c", i+'A');
            }
        }

        for(i = 0; i<26; i++){
            if(prm[lower[i]]==0){
                flg = 1;
                printf("%c", i+'a');
            }
        }

        if(flg==0) printf("empty\n");

        else printf("\n");

    }
    return 0;
}
