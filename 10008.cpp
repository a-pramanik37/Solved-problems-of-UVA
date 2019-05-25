#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
char a[100005];
char ans[50];
int b[26], c[104];
int main()

{
    int n, i, j, k,p, q, x, y;

    while(scanf("%d ", &n)==1){
            memset(b, 0, sizeof b);
         for(j = 1; j<=n; j++){
            gets(a);
            for(i = 0; i<strlen(a); i++){
                if(a[i]>=97 && a[i]<=122)a[i]-=32;

                if(a[i]>=65 && a[i]<=90){
                    b[a[i]-'A']++;
                }
            }
            if(j==n){
                    k = 0;
                for(i = 0; i<26; i++){
                    if(b[i]>0){
                        ans[k]=i+'A';
                        c[k] = b[i];
                        k++;
                    }
                }

                ans[k]='\0';
                /*printf("%s\n", ans);*/
                for(i = 0; i<k-1; i++){
                    for(p = 0; p<k-1-i; p++){
                        if(c[p]<c[p+1]){
                            swap(c[p], c[p+1]);
                            swap(ans[p], ans[p+1]);
                        }
                        else if(c[p]==c[p+1]){
                            if(ans[p]>ans[p+1]){
                                swap(c[p], c[p+1]);
                                swap(ans[p], ans[p+1]);
                            }
                        }
                    }
                }
                for(i = 0; i<k; i++){
                    printf("%c %d\n", ans[i], c[i]);
                }
            }
         }
    }
    return 0;
}
