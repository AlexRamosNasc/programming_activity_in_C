#include <stdio.h>

int main(){
    int DiaV, MesV, AnoV, DiaH, MesH, AnoH;
    
    scanf("%d %d %d %d %d %d", &DiaV, &MesV, &AnoV, &DiaH, &MesH, &AnoH);
    
    if(AnoV < AnoH){
        printf("Produto vencido");
    }
    else if(AnoV == AnoH){
        if(MesV < MesH){
            printf("Produto vencido");
        }
        else if(MesV == MesH){
            if(DiaV < DiaH){
                printf("Produto vencido");
            }
            else{
                printf("Produto não vencido");
            }
        }
        else{
            printf("Produto não vencido");
        }
    }
    else{
        printf("Produto não vencido");
    }
    return 0;
}
