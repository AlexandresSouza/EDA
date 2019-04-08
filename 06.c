#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int hrs_in=0, min_in=0, seg_in=0, temp_seg=0, aux=0;

	

	while(1)
	{
		temp_seg = 0;
		aux = scanf ("%d:%d:%d", &hrs_in, &min_in, &seg_in);

		if(aux == EOF)
		{
			break;
		}
		if(aux != EOF){
			temp_seg = hrs_in*3600 + min_in*60 + seg_in;
			printf("%d\n", (86400 - temp_seg));
		}

	};

	return 0;

}