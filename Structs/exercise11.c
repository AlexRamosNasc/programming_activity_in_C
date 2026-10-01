#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Dados{
    char nome[30];
    char endereco[50];
    char dt_nascimento[12];
    char cidade[30];
    char cep[10];
    char email[30];
};

struct Dados ler(void){
    struct Dados p;
    scanf(" %[^\n]", p.nome);
    scanf(" %[^\n]", p.endereço);
    scanf(" %[^\n]", p.dt_nascimento);
    scanf(" %[^\n]", p.cidade); 
    scanf(" %[^\n]", p.cep);
    scanf(" %[^\n]", p.email);

    return p;
}

int validarData(const char *data){
    int dia, mes, ano;

    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        return 0;
    }

    if (ano < 1900 || ano > 2026) {
        return 0;
    }

    if (mes < 1 || mes > 12) {
        return 0;
    }

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        diasPorMes[2] = 29;
    }

    if (dia < 1 || dia > diasPorMes[mes]) {
        return 0;
    }

    return 1;
}

int verificarCep(const char *cep){
    int tam = strlen(cep);

    if (tam == 8) {
        for (int i = 0; i < 8; i++) {
            if (!isdigit(cep[i])) { 
                return 0;
            }
        }
        return 1;
    }

    if (tam == 9) {
        for (int i = 0; i < 9; i++) {
            if (i == 5) {
                if (cep[i] != '-'){
                    return 0;  
                }
            } 
            else {
                if (!isdigit(cep[i])){ 
                    return 0;
                }
            }
        }
        return 1;
    }
    
    return 0;
};

int verificarEmail(const char *email){
    if (strchr(email, ' ') != NULL) {
        return 0;
    }

    const char *arroba = strchr(email, '@');
    if (arroba == NULL) {
        return 0;
    }

    if (arroba == email) {
        return 0;
    }

    if (strchr(arroba + 1, '@') != NULL) {
        return 0;
    }

    const char *ponto = strchr(arroba, '.');
    if (ponto == NULL) {
        return 0;
    }

    if (ponto == arroba + 1) {
        return 0;
    }

    if (*(ponto + 1) == '\0') {
        return 0;
    }

    return 1;
}

int main(){
    struct Dados usuario;

    usuario = ler();

    if(validarData(usuario.dt_nascimento)) {
        printf("Data válida!\n");
    } 
    else{
        printf("Data inválida!\n");
    }

    if(verificarCep(usuario.cep)) {
        printf("CEP válido!\n");
    }
    else{
        printf("CEP inválido!\n");
    }

    if(verificarEmail(usuario.email)) {
        printf("Email válido!\n");
    }
    else{
        printf("Email inválido!\n");
    }
 
    return 0;
}