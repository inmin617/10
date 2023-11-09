#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	FILE *fp;
	char c;
	
	fp=fopen("sample.txt", "r");
	
	if (fp==NULL){
		printf("failed to open\n");
		return 0;
	}
	
	
	while((c=fgetc(fp))!=EOF){
		
		putchar(c);
		
	}
	
	fclose(fp);
	
	system("PAUSE");
	return 0;
}
