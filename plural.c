#include <stdio.h>
#include <string.h>

void copyall(char from[],char to[]) {
	int i;
	for (i=0; i<strlen(from); i++) {
			to[i]=tolower(from[i]);
		}
}

void main() {
	char inp[20],out[20];
	int i=0;
	scanf("%s",inp);
	copyall(inp,inp);
	if (inp[strlen(inp)-1]=='y') {
		for (i=0; i<strlen(inp)-1; i++) {
			out[i]=tolower(inp[i]);
		}
		strcat(out,"ies");
	}
	else if (inp[strlen(inp)-1]=='s')
	{
		copyall(inp,out);
		strcat(out,"es");
	}
	else if ((inp[strlen(inp)-2]=='c'&&inp[strlen(inp)-1]=='h')||(inp[strlen(inp)-2]=='s'&&inp[strlen(inp)-1]=='h')) {
		copyall(inp,out);
		strcat(out,"es");
	}
	else {
		copyall(inp,out);
		strcat(out,"s");
	}
	printf("%s %s\n",inp,out);
}
