#include <stdio.h>

int tempo(int hora, int min, int seg){
    if(hora > 0){
        min += hora * 60;
    }
    if(min > 0){
        seg += min * 60;
    }
    return seg;
}

int main(){
    int hora, min, seg;
    printf("Digite um horario (H MIN SEG): ");
    scanf("%d %d %d", &hora, &min, &seg);
    printf("O tempo em segundos eh = %d", tempo(hora, min, seg));
    return 0;
}
