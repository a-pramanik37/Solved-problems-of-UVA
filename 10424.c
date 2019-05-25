#include <stdio.h>
#include <string.h>

int main()
{
    char ar[30], br[30], ch=37;

    int i, j, s1, s2,a[26],b[26], x, y, rem, S1, S2, p, q;
    double ans1, ans2, temp;

    while(gets(ar)){
        gets(br);
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);

        for(i = 0; i<strlen(ar); i++){
            if(ar[i]>=65 && ar[i]<=90){
                ar[i] = ar[i]+32;
            }
        }

        for(i = 0; i<strlen(br); i++){
            if(br[i]>=65 && br[i]<=90){
                br[i] = br[i]+32;
            }
        }

        for(i = 0; i<strlen(ar); i++){
            if(ar[i]>=97 && ar[i]<=122){
                a[ar[i]-'a']++;
            }
        }

        for(i = 0; i<strlen(br); i++){
            if(br[i]>=97 && br[i]<=122){
                b[br[i]-'a']++;
            }
        }

        s1 = 0;
        s2 = 0;
        for(i = 0; i<26; i++){
            s1 = s1+a[i]*(i+1);
            s2 = s2+b[i]*(i+1);
        }

        S1 = s1;
        S2 = s2;
        p = 0;
        q = 0;
        while(s1>0){
            rem = s1%10;
            p = p+rem;
            s1 = s1/10;
        }
        if(p>9) p = p%10+p/10;

        while(s2>0){
            rem = s2%10;
            q = q + rem;
            s2 = s2/10;
        }
        if(q>9) q = q%10+q/10;

        ans1 = p;
        ans2 = q;

    if(ans1>ans2){
        temp = ans1;
        ans1 = ans2;
        ans2 = temp;
    }


    printf("%.2lf %c\n", (ans1/ans2)*100.0, ch);

    }
    return 0;
}
