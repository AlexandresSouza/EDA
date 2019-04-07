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



int main ()
{
	char str[1000000], str2[1000000]={0};
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
	    		j++;
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

	    /*for(k =0; k<= strlen(str2); k++)
	    {
	    	if(str)
	    }*/
	    printf("%s\n", str2);
	}

    
}