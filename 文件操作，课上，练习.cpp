#include<stdio.h>
int main(){
	FILE *pf;
	char buffer[5000];
	pf = fopen("Untitled.cpp","r");
	fscanf(pf,"%s",buffer);
	printf("hello");
	fclose(pf);
	printf("%s",buffer);
	return 0;
}
