/*
* @Author: Alexandre Santos
* @Date:   2019-04-06 08:49:16
* @Last Modified by:   alunos
* @Last Modified time: 2019-04-06 11:27:02
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#define ROT 13



int main ()
{
	char str[1000000], str2[1000000]={0},str3[1000000]={0};
	unsigned int i = 1, j=0;
	bool p = false;

	while(fgets(str,1000000,stdin) != NULL){
		i=0;
	    j=0;
		for(i = 0; i <= strlen(str); i++)
	    {
	    	if(str[i] == ' ')
	    	{
	    		str2[j] = str[i];
	    		if(str2[j]>='a' && str2[j]<='z')
				{
		    		if(str2[j] + ROT <= 'z')
		    			str3[j] = str2[j] + ROT;
		    		else
		    			str3[j] = str2[j] - ROT;
		    	}
		    	else if(str2[j]>='A' && str2[j]<='Z')
				{
		    		if(str2[j] + ROT <= 'Z')
		    			str3[j] = str2[j] + ROT;
		    		else
		    			str3[j] = str2[j] - ROT;
		    	}
		    	else
		    		str3[j] = str2[j];

	    		j++;
	    		if(str[i-1] == 'p')
	    			p=!p;
	    	}
	    	else
	    	{
	    		if(p)
		    	{
		    		str2[j] = str[i];
		    		if(str2[j]>='a' && str2[j]<='z')
					{
			    		if(str2[j] + ROT <= 'z')
			    			str3[j] = str2[j] + ROT;
			    		else
			    			str3[j] = str2[j] - ROT;
			    	}
			    	else if(str2[j]>='A' && str2[j]<='Z')
					{
			    		if(str2[j] + ROT <= 'Z')
			    			str3[j] = str2[j] + ROT;
			    		else
			    			str3[j] = str2[j] - ROT;
			    	}
			    	else
			    		str3[j] = str2[j];

		    		j++;
		    		p =!p;
		    	}   	
	    		else
	    		{
		    		p=!p;
	    		}	
	    	}
	    }
		    printf("%s\n", str3);
	}    
}