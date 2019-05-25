#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;


int main()

{

    long long  i, j, k, l, to, from, val, s1, x, rem;

    char a[10000], b[10000], c[10000];

    while(scanf("%s%lld%lld", a, &from, &to)!=EOF){
        s1 = 0;
       for(i = 0; i<strlen(a); i++){
           if(a[i]>=48 && a[i]<=57){
            s1 = s1*from+(a[i]-48);
           }
           else{
            s1 = s1*from+(a[i]-55);
           }
       }

       if(s1==0) printf("      0\n");

      else {
        j =0;

       while(s1>0){

      rem = s1%to;

      if(rem>9){
       b[j] =rem+55 ;
      }

      else if(rem<=9) b[j] = rem+48;

        s1 = s1/to;
        j++;
       }
       b[j] = '\0';

       if(strlen(b)>7) printf("  ERROR\n");

       else{

        for(j = 0, k=strlen(b)-1; k>=0; k--){
            c[j] = b[k];
            j++;
        }

        c[j] = '\0';
        for(i = 1; i<=7-strlen(c); i++){
            printf(" ");
        }
        printf("%s\n", c);

       }
    }

    }
    return 0;
}
