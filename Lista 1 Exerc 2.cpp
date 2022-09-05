#include <stdio.h>

void maior(int *vet, int tam, int *maior){
    int i;
    *maior = *vet;
    for(i = 1; i < tam; i++){
         if(*maior < *(vet + i))
            *maior = *(vet + i);
    }
}
int main(){
    int  maior, v[10] = {45,89,69,23,14,75,2,45,100,58};
    maior(v, 10,&maior);
    printf("\tMaior: %d\n", maior);
     return 0;
}
