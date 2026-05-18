#include <stdio.h>

int main(){
    int n, med, x;
    scanf("%d", &n);
    int s[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &s[i]);
    }
    
    if(n % 2 != 0){
        med = ((n + 1) / 2) - 1;
        printf("MED = %d", s[med]);
    }
    else{
        x = (n + 1) / 2;
        med = (s[x - 1] + s[x]) / 2;
        printf("MED = %d", med);
    }
    return 0;
}
