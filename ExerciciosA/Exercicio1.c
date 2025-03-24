#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50000];
    int i = 0, cont = 0;

    FILE *fp = fopen("/home/fels/Documentos/POD/Textos/IpsonLoren.txt", "r+");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit(1);
    }

    

    while (fgets(str, 50000, fp) !=NULL)
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ' || str[i] == '\n')
            {
                cont++;
                if (str[i + 1] == ' ' || str[i] == '\n')
                {
                    continue;
                }
            }
        }
    }

    printf("O Arquivo possuí %d palavras\n", cont);

    fclose(fp);
}
