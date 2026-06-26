#include <stdio.h>
int main(){
    float mat[3][3] = {
        1.01, 2.1, 3.2, 
        4.3, 5.4, 6.5,
        7.6, 8.7, 9.8
    };

    float *pv;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%p ", pv = &mat[i][j]);
        }
        printf("\n");
    }

   return 0;
}
