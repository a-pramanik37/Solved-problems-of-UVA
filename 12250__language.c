#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[80];
    int i=0;
    while(scanf("%s", &s) !=EOF){
            i++;
        if(s[0]=='#') break;
        else if(s[0]=='H' && s[1]=='E'&& s[2]=='L' && s[3]=='L' && s[4]=='O'){
            printf("Case %d: ENGLISH\n", i);
        }
    else if(s[0]=='H' && s[1]=='O' && s[2]=='L' && s[3]=='A'){
        printf("Case %d: SPANISH\n", i);
    }
    else if(s[0]=='H' && s[1]=='A' && s[2]=='L' && s[3]=='L' && s[4]=='O'){
        printf("Case %d: GERMAN\n", i);
    }
    else if(s[0]=='B'&&s[1]=='O'&&s[2]=='N'&&s[3]=='J'&&s[4]=='O'&&s[5]=='U'&&s[6]=='R'){
        printf("Case %d: FRENCH\n", i);
    }
    else if(s[0]=='C'&&s[1]=='I'&&s[2]=='A'&&s[3]=='O'){
        printf("Case %d: ITALIAN\n", i);
    }
    else if(s[0]=='Z'&&s[1]=='D'&&s[2]=='R'&&s[3]=='A'&&s[4]=='V'&&s[5]=='S'&&s[6]=='T'&&s[7]=='V'&&s[8]=='U'&&s[9]=='J'&&s[10]=='T'&&s[11]=='E'){
        printf("Case %d: RUSSIAN\n", i);
    }
    else printf("Case %d: UNKNOWN\n", i);
    }
    return 0;
}
