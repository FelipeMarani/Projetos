#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[50000];

    printf("Escreva o que deseja inserir no arquivo: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    FILE *fp = fopen("/home/fels/Documentos/POD/Textos/EditText.txt", "a+");
    if (fp == NULL)
    {
        printf("Erro ao criar o arquivo de cópia!");
        fclose(fp);
        exit(1);
    }
    else
    {

        fputs(str, fp);
        printf("Sucesso ao adicionar texto no arquivo!!\n");
    }

    fclose(fp);

    return 0;
}
