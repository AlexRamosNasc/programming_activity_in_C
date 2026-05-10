#include <stdio.h>
int main(){
    float m[32][10];
    int n;
    float sTV[100], mP, sT = 0;
    scanf("%d", &n); 

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < n; j++){
            scanf("%f", &m[j][i]);
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < n; j++){
            sT += m[j][i];
        }
        sTV[i] = sT;
        sT = 0;
    }
    
    mP = sTV[0];
    for(int i = 0; i < 10; i++){
        if(sTV[i] < mP){
            mP = sTV[i];
        }
    }
    printf("Menor preço: %.2f\n", mP);
    printf("Supermercado(s) com menor preço:\n");
     for(int i = 0; i < 10; i++){
        if(sTV[i] == mP){
            printf("%d\n", i + 1);
        }
    }
    return 0;
}
