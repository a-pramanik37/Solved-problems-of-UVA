#include<bits/stdc++.h>
using namespace std;

int main()
{
    char msg[1000] ;
    char str[1000];

while(1)
{
  int i = 0, j = 0;
    gets(msg);
    while (msg[i] != '\0')
    {
        if (msg[i] != ' ')
        {
            str[j] = msg[i];
            j++;
        }
        else
        {
            str[j] = '\0';
            printf("%s", strrev(str));
            printf(" ");
            j = 0;
        }
        i++;
    }

    str[j] = '\0';
    printf("%s", strrev(str));
    printf("\n");
}
return 0;
}
