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

    FILE *nfp = fopen("/home/fels/Documentos/POD/Textos/NewIpsonLoren.txt", "a+");
    if (nfp == NULL) {
        printf("Erro ao criar o arquivo de cópia!");
        fclose(fp);
        exit(1);
    }

    while (fgets(str, sizeof(str), fp) != NULL)
    {
        fputs(str, nfp);
    }

    printf("feito a nova cópia do arquivo");

    fclose(fp);
    fclose(nfp);

    return 0;
}
