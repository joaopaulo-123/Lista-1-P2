
void Menor(int *vet, int tam, int *menor){
    int i;
    *menor = *vet;
    for(i = 1; i < tam; i++){
        if(*menor > *(vet + i))
            *menor = *(vet + i);
    }
}

int main(){
    int menor,v[10] = {45,89,69,23,14,75,2,45,100,58};
    menor(v, 10, &menor);
    printf("Menor: %d\", menor);
    return 0;
}
