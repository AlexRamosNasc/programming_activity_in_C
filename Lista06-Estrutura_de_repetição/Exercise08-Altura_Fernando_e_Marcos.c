#include <stdio.h>

int main(){
    float Fernando, Marcos;
    int Anos = 0;
    
    Fernando = 150;
    Marcos = 120;
    
    while(Fernando >= Marcos){
        Fernando += 2;
        Marcos += 4;
        Anos++;
    }
    printf("%d", Anos);
}
