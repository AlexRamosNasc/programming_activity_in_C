#include <stdio.h>

int main()
{
    int V, N100 = 0, N50 = 0, N20 = 0, N10 = 0, N5 = 0;
    scanf("%d", &V);
    if(V % 5 == 0){
    
        while(V >= 100) { V -= 100; N100 ++; }
        while(V >= 50)  { V -=  50; N50 ++;  }
        while(V >= 20)  { V -=  20; N20 ++;  }
        while(V >= 10)  { V -=  10; N10 ++;  }
        while(V >= 5)   { V -=   5; N5 ++;   }
        
    printf("%d cédulas de 100\n",N100);
    printf("%d cédulas de 50\n",N50);
    printf("%d cédulas de 20\n",N20);
    printf("%d cédulas de 10\n",N10);
    printf("%d cédulas de 5",N5);
    }
    else
        printf("comando invalido");
}
