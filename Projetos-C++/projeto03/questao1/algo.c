#include <stdio.h>
// #include <math.h>
// #include <locale.h>
#include <stdlib.h>

//compilar gcc algo.c -o algo.exe -lm

int main() {
    FILE *arqDados01, 
    *arqDados02, 
    *arqTxPDados01,
    *arqTxVDados01,
    *arqPxVDados01,
    *arqTxPDados02,
    *arqTxVDados02,
    *arqPxVDados02;
    int i = 0;

    float VetTempoDados01[401];
    float VetPosicaoDados01[401];
    float VetVelocidadeDados01[401];

    float VetTempoDados02[401];
    float VetPosicaoDados02[401];
    float VetVelocidadeDados02[401];

    arqDados01 = fopen("Dados01Equipe4.dat", "rb");
    arqDados02 = fopen("Dados02Equipe4.dat", "rb");
    
    arqTxPDados01 = fopen("TempoXPosicaoDados01.txt", "w+");
    arqTxVDados01 = fopen("TempoXVelocidadeDados01.txt", "w+");
    arqPxVDados01 = fopen("PosicaoXVelocidadeDados01.txt", "w+");

    arqTxPDados02 = fopen("TempoXPosicaoDados02.txt", "w+");
    arqTxVDados02 = fopen("TempoXVelocidadeDados02.txt", "w+");
    arqPxVDados02 = fopen("PosicaoXVelocidadeDados02.txt", "w+");

    if (arqDados01 == NULL || arqDados02 == NULL)
    {
        printf("Problemas na abertura dos arquivos\n");
        return 0;
    }else{
        // printf("\nDados01\n");
        while(fscanf(arqDados01, "%f %f %f", &VetTempoDados01[i], &VetPosicaoDados01[i], &VetVelocidadeDados01[i]) != EOF){
            // printf("%.6f  %.6f  %.6f \n", VetTempoDados01[i], VetPosicaoDados01[i], VetVelocidadeDados01[i]);
            fprintf(arqTxPDados01, "%.6f\t%.6f\n", VetTempoDados01[i], VetPosicaoDados01[i]);
            fprintf(arqTxVDados01, "%.6f\t%.6f\n", VetTempoDados01[i], VetVelocidadeDados01[i]);
            fprintf(arqPxVDados01, "%.6f\t%.6f\n", VetPosicaoDados01[i], VetVelocidadeDados01[i]);     
            i++;
        }
        
        i = 0;
        
        // printf("\nDados02\n");
        while(fscanf(arqDados02, "%f %f %f", &VetTempoDados02[i], &VetPosicaoDados02[i], &VetVelocidadeDados02[i]) != EOF){
            // printf("%.6f  %.6f  %.6f \n", VetTempoDados02[i], VetPosicaoDados02[i], VetVelocidadeDados02[i]);
            fprintf(arqTxPDados02, "%.6f\t%.6f\n", VetTempoDados02[i], VetPosicaoDados02[i]);
            fprintf(arqTxVDados02, "%.6f\t%.6f\n", VetTempoDados02[i], VetVelocidadeDados02[i]);
            fprintf(arqPxVDados02, "%.6f\t%.6f\n", VetPosicaoDados02[i], VetVelocidadeDados02[i]);     
            i++;
        }
        
        // printf("\nDados02\n");
        // while(fscanf(arqWrite, "%f\t%f", &VetPosicao[i], &VetTempo[i]) != EOF){
        //     printf("%.6f  %.6f  %.6f \n", VetTempo[i], VetPosicao[i], VetVelocidade[i]);
        //     i++;
        // }
    }
    
    fclose(arqDados01);
    fclose(arqDados02);
    fclose(arqPxVDados01);
    fclose(arqTxPDados01);
    fclose(arqTxVDados01);
    return 0;
}