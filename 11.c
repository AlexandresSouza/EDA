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
	char str[1000000], str2[1000000]={0}, e=0;
	unsigned int i = 1, j=0, k=0;
	bool p = false;

	while(fgets(str,1000000,stdin) != NULL){
		
		i=0;
	    j=0;
		for(i = 0; i <= strlen(str); i++)
	    {
	    	if(str[i] == ' ')
	    	{
	    		str2[j] = str[i];
	    		j++;
	    		if(str[i-1] == 'p')
	    			p=!p;
	    	}
	    	else
	    	{
	    		if(p)
		    	{
		    		str2[j] = str[i];
		    		j++;
		    		p =!p;
		    	}   	
	    		else
	    		{
		    		p=!p;
	    		}	
	    	}
	    }
	    for(k = 0; k <= strlen(str2); k++)
	    {
		    if(str2[k] >='A' && str2[k] <='Z')
	        {
	            if((e = str2[k] + ROT) <= 'Z')
	            { 	str[k] = e;
	            	printf("%c\n", str2[k]);
	            }
	            else
	            {
	                e = str2[k] - ROT;
	                str2[k] = e;
	                printf("%c\n", str2[k]);
	            }
	        }
	        else if(str2[k] >='a' && str2[k] <='z')
	        {
	            if((e= str2[k] + ROT) <= 'z')
	            { 
	               	str2[k] = e;
	            	printf("%c\n", str2[k]);
	            }
	            else
	            {
	                e = str2[k] - ROT;
	                str2[k] = e;
	                printf("%c\n", str2[k]);
	            }
	        }
	        else
	        {
	            str2[k] = str2[k];
	            printf("%c\n", str2[k]);
	        }
	    }
		    printf("%s\n", str2);
	}

    
}