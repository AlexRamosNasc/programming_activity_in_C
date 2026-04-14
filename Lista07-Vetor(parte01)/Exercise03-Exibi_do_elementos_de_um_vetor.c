#include <stdio.h>

int main()
{
    int Atleta[20];
    
    for(int I = 0; I < 20; I++){
        scanf("%d", &Atleta[I]);
    }
    for(int I = 0; I < 20; I++){
        printf("%d ", Atleta[19 - I]);
    }
    
    
    return 0;
}
