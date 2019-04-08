#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int  sim=0, count=0, linhas=0;
	char str[3];

	while(scanf("%s", str) != EOF){
		if(strcmp(str,"sim") == 0)
			{
					sim++;
			}

		linhas++;

		if(linhas==10)
		{
			if(sim>=2)
				count++;
			linhas = 0;
			sim = 0;
		}
	}
	
	printf("%d\n", count);
	return 0;

}