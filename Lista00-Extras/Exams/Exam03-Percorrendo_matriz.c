#include <stdio.h>
int main(){
    int m[32][32];
    int sDP = 0, sDS = 0, sEAcimaDP = 0, sEAbaixoDS = 0, X = 0, n;
    scanf("%d", &n); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("Matriz:\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for(int j = 0, i = 0; i < n; i++, j++){
        sDP += m[i][j];
    }
    for(int j = 0, i = n - 1; i >= 0; i--, j++){ 
        sDS += m[i][j]; 
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            sEAcimaDP += m[i][j];
        }
    }
    for(int i = n - 1; i >= 0; i--){
        for(int j = X + 1; j < n; j++){
            sEAbaixoDS += m[i][j];
        }
        X++;
    }
    
    printf("Soma da diagonal principal: %d\n", sDP);
    printf("Soma da diagonal secundaria: %d\n", sDS);
    printf("Soma acima da diagonal principal: %d\n", sEAcimaDP);
    printf("Soma abaixo da diagonal secundaria: %d\n", sEAbaixoDS);

    return 0;
}
