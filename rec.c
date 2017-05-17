    #include<stdio.h>
    int rec(unsigned long long int x)
    {
    	unsigned long long int d,s;
    	if(x<10)
    	return x;
    	else
    	{
    		s=0;
    		while(x!=0)
    		{
    	d=x%10;
    	s=s+d;
    	x=x/10;
    		}



    			return rec(s);

    	}
    }
    int main()
    {
    	unsigned long long int i,j,k,l,m,n,x;
    	scanf("%llu",&i);
    	while(i--)
    	{
    		unsigned long long int s=0;
    		scanf("%llu",&j);
    		while(j--)
    		{
    			scanf("%llu%llu",&k,&l);
    			s=s + k*l;
    			if(s>9)
    			{
    				m=s;
    				n=0;
    				while(m!=0)
    				{
    					x=m%10;
    					n=n+x;
    					m = m/10;
    				}
    				s=n;
    			}
    		}

    		if(s<10)
    		{
    			printf("%llu\n",s);
    		}
    		else
    		{
    			s=rec(s);
    			printf("%llu\n",s);
    		}
    	}
    }
