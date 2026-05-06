#include <stdio.h>

int main()
{
    int m[5][5] = { 
    { 1,  2,  3,  4,  5}, 
    {-1, -2, -3, -4, -5}, 
    { 0, -1,  2, -4,  8}, 
    { 0, -2, -4, -6, -8}, 
    { 10, 9,  8,  7,  6}
    };
    int sDP = 0, sDS = 0, sEAcimaDP = 0, sEAbaixoDS = 0, X = 0;
    
    for(int j = 0, i = 0; i < 5; i++, j++){
        sDP += m[i][j];
    }
    for(int j = 0, i = 4; i >= 0; i--, j++){ 
        sDS += m[i][j]; 
    }
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            sEAcimaDP += m[i][j];
        }
    }
    for(int i = 4; i >= 0; i--){
        for(int j = X + 1; j < 5; j++){
            sEAbaixoDS += m[i][j];
        }
        X++;
    }
    
    printf("%d\n", sDP);
    printf("%d\n", sDS);
    printf("%d\n", sEAcimaDP);
    printf("%d\n", sEAbaixoDS);
    return 0;
}
