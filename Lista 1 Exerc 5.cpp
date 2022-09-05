#include <stdio.h>
#include <string.h>

int main(){
	char dna[50], complementar[50];
	int i, n;
	printf("Entre com a seq DNA:");
	gets(dna);
	strupr(dna);
	printf("%s\n",dna);	
	n = strlen(dna);
}
