#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Horario{
    int hora;
    int minutos;
    int segundos;
};

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Compromisso{
    struct Data data;
    struct Horario horario;
    char texto[100];
};

int main(){
    struct Horario A;
    struct Data B;
    struct Compromisso C;
    
    A.hora = 12;
    A.minutos = 30;
    A.segundos = 58;

    B.ano = 2026;
    B.mes = 9;
    B.dia = 28;

    C.data = B;
    C.horario = A;

    strcpy(C.texto, "Consulta medica");
    

    C.data.ano = 2025;
    C.data.mes = 12;
    C.data.dia = 30;

    C.horario.hora = 13;
    C.horario.minutos = 50;
    C.horario.segundos = 1;

    strcpy(C.texto, "Arrumar carro");

    
    printf("Compromisso: %s\n", C.texto);
    printf("Data: %02d/%02d/%04d às %02d:%02d:%02dh\n", C.data.dia, C.data.mes, C.data.ano, C.horario.hora, C.horario.minutos, C.horario.segundos);
    

    return 0;
}

