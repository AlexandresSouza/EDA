#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], str2[100];
    unsigned int i=0, n=0, maiorString=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%s", str);
        if(maiorString<strlen(str))
        {
            maiorString = strlen(str);
            strcpy(str2, str);
        }
            
    }

    printf("%s\n", str2);

    return 0;
}
