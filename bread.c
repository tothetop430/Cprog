/* Bread as white and sweet*/
#include <stdio.h>
void main()
{
	char bread,size,type;
	long time;
	scanf("\n%c",&bread);
	scanf("\n%c",&size);
	scanf("\n%c",&type);
	
	if(bread=='w' && size=='s' && type=='m')
	{
		time=15*60+60*60+18*60+20*60+2;
		printf("%ld",time);
	}
	else if(bread=='w' && size=='s' && type=='a')
	{
		time=(15+60+18+20+75+45+30)*60+2;
		printf("%ld",time);
	}
	else if(bread=='w' && size=='d' && type=='m')
	{
		time=(15+60+18+20)*60+2+0.5*((15+60+18+20)*60+2);
		printf("%ld",time);
	}
	else if(bread=='w' && size=='d' && type=='a')
	{
		time=(15+60+18+20+75+45+30)*60+2+0.5*((15+60+18+20+75+45+30)*60+2);
		printf("%ld",time);
	}
	else if(bread=='s' && size=='s' && type=='m')
	{
		time=(20+60+33+30)*60+2;
		printf("%ld",time);
	}
	else if(bread=='s' && size=='s' && type=='a')
	{
		time=(20+60+33+30+75+35+30)*60+2;
		printf("%ld",time);
	}
	else if(bread=='s' && size=='d' && type=='m')
	{
		time=(20+60+33+30)*60+2+0.5*((20+60+33+30)*60+2);
		printf("%ld",time);
	}
	else if(bread=='s' && size=='d' && type=='a')
	{
		time=(20+60+33+30+75+35+30)*60+2+0.5*((20+60+33+30+75+35+30)*60+2);
		printf("%ld",time);
	}
}