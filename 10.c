/*
* @Author: Alexandre Santos
* @Date:   2019-04-06 08:49:16
* @Last Modified by:   alunos
* @Last Modified time: 2019-04-06 10:38:09
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>



int main ()
{
	char str[1000], str2[1000]={0};
	unsigned int i = 1, j=0;
	bool p = false;
	//char str3[] = "pA pppapppa pdpo pPpapppa";

	scanf("%[A-Z a-z]",str);


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
    printf("%s\n", str2);
}