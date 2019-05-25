#include <stdio.h>
int main()

{
    int T, t1, t2, f, a, ct1, ct2, ct3, i, c, mark;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d%d%d%d%d%d%d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);
        if((ct1 <= ct2 && ct2 <= ct3)||(ct1 <= ct3 && ct3 <= ct2)){
            c = (ct2+ct3)/2;
        }
        else if((ct2<=ct1 && ct1 <= ct3)||(ct2 <=ct3 && ct3 <= ct1)){
            c = (ct1+ct3)/2;
        }
        else if((ct3 <= ct2 && ct2 <= ct1)||(ct3 <= ct1 && ct1 <= ct2)){
            c = (ct1+ct2)/2;
        }
        mark=t1+t2+f+a+c;
        if(mark >= 90) printf("Case %d: A\n", i);
        else if(mark >= 80 && mark <90) printf("Case %d: B\n", i);
        else if(mark >= 70 && mark <80) printf("Case %d: C\n", i);
        else if(mark >= 60 && mark <70) printf("Case %d: D\n", i);
        else if(mark < 60) printf("Case %d: F\n", i);
    }
    return 0;
}
