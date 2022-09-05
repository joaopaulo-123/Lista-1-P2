#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
int vet[10]; 
int i, aux;
for (i=0; i<10; i++) { 
printf(“Informe valor do vet[%d]: “, i); 
scanf(“%d”, &vet[i]); 
}
printf(“digite valor para comparacao: “); 
scanf(“%d”, &aux); 
for (i=0; i<10; i++) { 
if (aux==vet[i]) { 
printf(“O valor digitado esta na posicao vet[%d].”, i); 
}
}
return 0;
}
