#include <stdio.h>
#include <stdlib.h>

int main(){
    double *vet; 
    int n = 10, i = 1, j = 0;
    vet = (double *) calloc(n, sizeof(double));

    printf("\ndigite seus numeros\n");
    while(1){
        printf("numero[%d] = ", i);
        scanf("%lf", &vet[j]);

        if(vet[j] == 0){
            break;
        }

        i++;
        j++;

        if(j == n-1){
            double *vet2 = (double *) calloc(n, sizeof(double));

            for(int i = 0; i < n; i++){
                vet2[i] = vet[i]; 
            }

            n += 10;

            free(vet);

            vet = (double *) calloc(n, sizeof(double));
            for(int i = 0; i < n; i++){
                vet[i] = vet2[i]; 
            }

            free(vet2);
        }
    }
    printf("\n");
    for(int i = 0; i < j; i++){
        printf("%f ", vet[i]);
    }
    printf("\n");

    free(vet);
    return 0;
}