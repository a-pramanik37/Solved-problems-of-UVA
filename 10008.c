#include <stdio.h>
#include <string.h>
char a[500];
int b[26] = {0};

int main()
{
    int n, i, j, max, k;
  scanf("%d ", &n);
      for(k = 1; k<=n; k++){
        gets(a);

        for(i = 0; i<strlen(a); i++){
            if(a[i]>=65 && a[i]<=90){
                a[j] = a[j]+32;
            }
        }

        for(i = 0; i<strlen(a); i++){
            if(a[i]>=97 && a[i]<=122){
                b[a[i]-'a']++;
            }
        }

        max = 0;

        for(i = 0; i<26; i++){
            if(b[i]>max) max = b[i];
        }



         if(k==n){
                        for(i = max; i>= 1; i--){
            for(j = 0; j<='z'-'a'; j++){
                if(i ==b[j]) printf("%c %d\n", j+'A', b[j]);
            }
        }
         }

    }
    return 0;
}
