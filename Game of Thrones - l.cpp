#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int  i, j, k, jor, bijor, b[26], total;

    char a[100005];

    while(scanf("%s", a)==1){

            jor = 0;
    bijor = 0;
    total = 0;

            memset(b, 0, sizeof b);

        if(strlen(a)==1) printf("YES\n");

        else if((strlen(a)%2)==0){

            for(i = 0; i<strlen(a); i++){
                b[a[i]-'a']++;
            }



    for(i = 0; i<26; i++){
        if(b[i]>0){
             total++;
             if(b[i]%2==0) jor++;
             else bijor++;
        }

    }
    if(jor==total) printf("YES\n");
    else printf("NO\n");

        }

        else if((strlen(a)%2)==1){

            for(i = 0; i<strlen(a); i++){
                b[a[i]-'a']++;
            }



    for(i = 0; i<26; i++){
        if(b[i]>0){
             total++;
             if(b[i]%2==0) jor++;
             else bijor++;
        }

        }

        if(bijor==1) printf("YES\n");
        else printf("NO\n");

    }
    }
    return 0;
}
