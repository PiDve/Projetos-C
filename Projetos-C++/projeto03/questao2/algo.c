#include <stdio.h>
// #include <math.h>
// #include <locale.h>
#include <stdlib.h>
#include <string.h>
//compilar gcc algo.c -o algo.exe -lm

int main()
{
    FILE *arqDados01,
        *arqDados02,
        *OutPos01,
        *OutPos02,
        *OutNeg01,
        *OutNeg02;
    int i = 0;

    float VetTempoDados01[401];
    float VetPosicaoDados01[401];
    float VetVelocidadeDados01[401];

    float VetTempoDados02[401];
    float VetPosicaoDados02[401];
    float VetVelocidadeDados02[401];

    arqDados01 = fopen("Dados01Equipe4.dat", "rb");
    arqDados02 = fopen("Dados02Equipe4.dat", "rb");

    OutPos01 = fopen("OutPos01.dat", "wb");
    OutPos02 = fopen("OutPos02.dat", "wb");
    OutNeg01 = fopen("OutNeg01.dat", "wb");
    OutNeg02 = fopen("OutNeg02.dat", "wb");

    if (arqDados01 == NULL || arqDados02 == NULL)
    {
        printf("Problemas na abertura dos arquivos\n");
        return 0;
    }
    else
    {
        while (fscanf(arqDados01, "%f %f %f", &VetTempoDados01[i], &VetPosicaoDados01[i], &VetVelocidadeDados01[i]) != EOF)
        {
            if (VetPosicaoDados01[i] >= 0.0)
            {
                fprintf(OutPos01, "%.6f\t%.6f\t%.6f\n", VetTempoDados01[i], VetPosicaoDados01[i], VetVelocidadeDados01[i]);
            }
            if (VetPosicaoDados01[i] < 0.0)
            {
                fprintf(OutNeg01, "%.6f\t%.6f\t%.6f\n", VetTempoDados01[i], VetPosicaoDados01[i], VetVelocidadeDados01[i]);
            }

            i++;
        }

        i = 0;
        while (fscanf(arqDados02, "%f %f %f", &VetTempoDados02[i], &VetPosicaoDados02[i], &VetVelocidadeDados02[i]) != EOF)
        {
            if (VetPosicaoDados02[i] >= 0.0)
            {
                fprintf(OutPos02, "%.6f\t%.6f\t%.6f\n", VetTempoDados02[i], VetPosicaoDados02[i], VetVelocidadeDados02[i]);
            }
            if (VetPosicaoDados02[i] < 0.0)
            {
                fprintf(OutNeg02, "%.6f\t%.6f\t%.6f\n", VetTempoDados02[i], VetPosicaoDados02[i], VetVelocidadeDados02[i]);
            }

            i++;
        }

        fclose(arqDados01);
        fclose(arqDados02);
        fclose(OutPos01);
        fclose(OutPos02);
        fclose(OutNeg01);
        fclose(OutNeg02);

        return 0;
    }
}