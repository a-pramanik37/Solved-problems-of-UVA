#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[10000], b[10000], ch;

    long long i, j, s1, s2, p;

    while(scanf("%s", a)==1){

        strcpy(b, a);

        for(i = 0; i<(strlen(a)-1); i++){
            for(j = i+1; j<strlen(a); j++){
                if(a[i]<a[j]){
                    ch = a[i];
                    a[i] = a[j];
                    a[j] = ch;
                }
            }
        }
        s1 = 0;
        s2 = 0;

        for(i = 0; i <strlen(a); i++){
            s1 =s1*10+(a[i]-48);
        }
        int coun=0;
        int minn=11;

        for(i = 0; i<(strlen(b)-1); i++){
            for(j = i+1; j<strlen(b); j++){
                if(b[i]>b[j]){
                    ch = b[i];
                    b[i] = b[j];
                    b[j] = ch;
                }
            }
        }


        if(b[0]=='0'){
            for(i = 0; i<strlen(b); i++){
                if(b[i]!='0'){
                    swap(b[0], b[i]);
                    break;
                }
            }
        }



        for(i = 0; i <strlen(b); i++){
            s2 =s2*10+(b[i]-48);
        }
        long long int p;

        if(s1<s2){
            p = s1;
            s1 = s2;
            s2 = p;
        }

        long long x = s1-s2;


        printf("%lld - %lld = %lld = 9 * %lld\n", s1, s2, x, x/9);

    }
    return 0;
}
