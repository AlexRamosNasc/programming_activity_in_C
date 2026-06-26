#include <stdio.h>
int ord(int *px, int *py, int *pz){
    int temp, vet[3] = {*px, *py, *pz}, mud = 1;
    while(mud){
        mud = 0;
        for(int i = 0; i < 2; i++){
            if(vet[i] > vet [i + 1]){
                temp = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = temp;
                mud = 1;
            }
        }
    }
    *px = vet[0]; *py = vet[1]; *pz = vet[2];
    if(*px == *py && *py == *pz){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    printf("%d %d %d\n", x, y, z);
    printf("%d\n", ord(&x, &y, &z));
    printf("%d %d %d\n", x, y, z);

   return 0;
}
