#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void no_transform()
{
	char temp[100];
	FILE *fp = fopen("Payload.json", "r");
	
	int i=0;
	char c = fgetc(fp); 
    	while (c != EOF)
    	{ 
	     temp[i++] = c;
	     c = fgetc(fp);
        }
	temp[i]='\0';
	
	char payload[strlen(temp)];
	int k=0;
	for(i=0;i<strlen(temp);i++)
	{
		if(temp[i]==':')
		{
			for(int j=i+2;j<strlen(temp);j++)
			{
				if(temp[j]=='"')
					break;
				payload[k++] = temp[j];
			}
			break;		
		}
	}
	
	printf("\nPayload:\t%s\n",payload);
	
	//add_payload(payload);
	
}






void check_transform(char type[])
{
	if(!strcmp(type,"json"))
	{
		printf("\nNeed transformation\n");
		no_transform();
	}
	else
	{
		printf("\nNo transformation needed\n");
		
	}
	
}

