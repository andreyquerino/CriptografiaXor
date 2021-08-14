//Autor: Andrey Querino

#include <bits/stdc++.h>
#include <stdio.h>
#include <locale.h>

void Decrypter(char* cripto) { 
    char Chave[2] = {4, 4}; //Coloque quantas chaves quiser
    for (int i = 0; i < (strlen(cripto)); i++){ 
        cripto[i] = cripto[i] ^ Chave[i % (sizeof(Chave) / sizeof(char))];
        printf("%c",cripto[i]); 
    } 
} 

int main() {
    setlocale(LC_ALL, "Portuguese");
    char texto[1000];
    int  opcoes;
    while (opcoes != 0) {
        system("cls");
        printf("\033[22;32m-----------------------------------------------------------------\n\n");
        printf(" .o88b. d8888b. d888888b d8888b. d888888b db    db  .d88b.  d8888b.\n"); 
        printf("d8P  Y8 88  `8D   `88'   88  `8D `~~88~~' `8b  d8' .8P  Y8. 88  `8D\n");  
        printf("8P      88oobY'    88    88oodD'    88     `8bd8'  88    88 88oobY'\n");  
        printf("8b      88`8b      88    88~~~      88     .dPYb.  88    88 88`8b\n");    
        printf("Y8b  d8 88 `88.   .88.   88         88    .8P  Y8. `8b  d8' 88 `88.\n");  
        printf(" `Y88P' 88   YD Y888888P 88         YP    YP    YP  `Y88P'  88   YD\n\n"); 
        printf("--------------------------------------- \033[01;37mAndrey Querino \033[22;32m------------\n\n");
        printf("\033[01;37mInsira o texto que deseja criptografar: ");
        gets(texto);
        printf("\n\033[01;37mTexto Criptografado: \033[01;33m");
        Decrypter(texto); 
        printf("\n\033[01;37mTexto Descriptografado: \033[01;33m"); 
        Decrypter(texto);
        printf("\n\n\033[01;37mDeseja criptografar outro texto? \033[01;31m[1]SIM / [0]NÃO: \033[01;37m");
        scanf("%d",&opcoes);
        fflush(stdin);
        if (opcoes > 1){
            printf("\n\033[22;35mErro: Opção inválida!\033[01;37m\n");
            system("pause");
        }
    }
    return 0;
}