#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50000], text;
    int i = 0, cont = 0;

    FILE *fp = fopen("/home/fels/Documentos/POD/Textos/IpsonLoren.txt", "r+");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit(1);
    }

    printf("Digite uma letra específica para buscar:");
    scanf(" %c", &text);

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == text)
            {
                cont++;
            }
        }
    }

    printf("O Arquivo possuí %d caracteres '%c'\n", cont, text);

    fclose(fp);
}
