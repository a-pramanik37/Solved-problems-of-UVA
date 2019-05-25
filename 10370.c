#include <stdio.h>
int main()
{
    double  avg, sum, count, ans;

    int a[1000], n, j, i, t, p=37;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        sum = 0;
        for(j = 1; j <=n; j++){
            scanf("%d", &a[j]);
            sum = sum+a[j];
        }
        avg = sum/n;
        count = 0;
        for(j = 1; j <= n; j++){
            if(a[j]>avg) count++;
        }
        ans = (count/n)*100.0;
        printf("%.3lf", ans);

        printf("%c\n", p);
    }
    return 0;
}
