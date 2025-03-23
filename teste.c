#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    char text[25];

    FILE *fp = fopen("/home/fels/Documentos/POD/Textos/PesquisaeOrdenacao.txt", "r+");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit(1);
    }

    fputs(text, fp);

    while (!feof(fp))
    {
        c = fgetc(fp);
        printf("%c \n", c);
    }

    fclose(fp);
}
