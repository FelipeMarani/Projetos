#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[500000];
    int i = 0;

    FILE *fp = fopen("/home/fels/Documentos/POD/Textos/IpsonLoren.txt", "r+");
    if (fp == NULL)
    {
        printf("Erro ao abrir arquivo!");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(str, 500000, fp);
        for (i = 0; i < sizeof(str); i++)
        {
            FILE *nfp = fopen("/home/fels/Documentos/POD/Textos/NewIpsonLoren.txt", "a+");
            fputs(str, nfp);
            fclose(nfp);
        }
    }

    printf("feito a nova cópia do arquivo");
    
    fclose(fp);
}
