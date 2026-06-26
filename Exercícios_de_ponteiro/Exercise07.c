#include <stdio.h>
int main(){
    float mat[3][3] = {
        1, 2, 3, 
        4, 5, 6,
        7, 8, 9
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
