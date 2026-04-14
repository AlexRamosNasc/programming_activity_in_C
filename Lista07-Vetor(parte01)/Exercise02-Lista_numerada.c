#include <stdio.h>

int main()
{
    float Atleta[50];
    
    for(int I = 0; I < 50; I++){
        scanf("%f", &Atleta[I]);
        printf("Atleta %d: %.2f\n", I + 1, Atleta[I]);
    }
  
    return 0;
}
