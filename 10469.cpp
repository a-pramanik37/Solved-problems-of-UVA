#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[1000], b[1000], c[1000], d[1000], temp[1000], temp1[1000], ans1[10000], ans2[1000];

    int i, j, k, sum1, sum2;

    while(scanf("%s%s", a, b)==2){

        sum1 = atoi(a);
        sum2 = atoi(b);

        i = 0;
        while(sum1>0){
            ans1[i] = (sum1%2)+48;
            sum1 = sum1/2;
            i++;
        }

        ans1[i] = '\0';

        j = 0;


        for(i = strlen(ans1)-1; i>=0; i--){
            c[j] = ans1[i];
            j++;
        }
        c[j] = '\0';

        i = 0;
        while(sum2>0){
            ans2[i] = (sum2%2)+48;
            sum2 = sum2/2;
            i++;
        }
        ans2[i] = '\0';

        j = 0;

        for(i = strlen(ans2)-1; i>=0; i--){
            d[j] = ans2[i];
            j++;
        }
        d[j] = '\0';

        strcpy(ans1, "");
        strcpy(ans2, "");


        if(strlen(c)>strlen(d)){

            strcpy(temp, c);
            strcpy(c, d);
            strcpy(d, temp);

        }

        j = 0;
        for(i = 0; i<(strlen(d)-strlen(c)); i++){
            temp[j] = '0';
            j++;
        }
        temp[j] = '\0';

        strcat(temp, c);

        strcpy(c, temp);

        j = 0;

       for(i = 0; i<strlen(c); i++){
        if(c[i]==d[i]) ans1[j] = '0';

        else ans1[j] = '1';

        j++;
       }
       ans1[j] = '\0';

       int ann = 0;

       for(i = 0; i<strlen(ans1); i++){
        ann = ann*2+ans1[i]-48;
       }

       printf("%d\n", ann);

    }
    return 0;
}
