#include <stdio.h>
// #include <math.h>
// #include <locale.h>
#include <stdlib.h>

//compilar gcc algo.c -o algo.exe -lm

int main() {
    FILE *arqDados01, 
    *arqDados02,
    *result1,
    *result2;
    int i = 0;
    float somaPosicao01 = 0.0,
    somaVelocidade01 = 0.0,
    mediaPosicao01 = 0.0,
    mediaVelocidade01 = 0.0,
    somaPosicao02 = 0.0,
    somaVelocidade02 = 0.0,
    mediaPosicao02 = 0.0,
    mediaVelocidade02 = 0.0;

    float VetTempoDados01[401];
    float VetPosicaoDados01[401];
    float VetVelocidadeDados01[401];

    float VetTempoDados02[401];
    float VetPosicaoDados02[401];
    float VetVelocidadeDados02[401];

    arqDados01 = fopen("Dados01Equipe4.dat", "rb");
    arqDados02 = fopen("Dados02Equipe4.dat", "rb");
    result1 = fopen("result1.dat", "wb");
    result2 = fopen("result2.dat", "wb");
    
    if (arqDados01 == NULL || arqDados02 == NULL)
    {
        printf("Problemas na abertura dos arquivos\n");
        return 0;
    }else{
        // printf("\nDados01\n");
        while( !feof(arqDados01) ){
            fscanf(arqDados01, "%f %f %f", &VetTempoDados01[i], &VetPosicaoDados01[i], &VetVelocidadeDados01[i]);
            somaPosicao01 += VetPosicaoDados01[i];
            somaVelocidade01 += VetVelocidadeDados01[i];
            i++;
        }
        
        mediaPosicao01 = somaPosicao01 / 401;
        mediaVelocidade01 = somaVelocidade01 / 401;   
        fprintf(result1, "Soma Velocidade: %.6f\t Soma Posicao: %.6f\t Media Posicao: %.6f\t Media Velocidade %.6f\n", somaPosicao01, somaVelocidade01, mediaPosicao01, mediaVelocidade01);
        printf("Soma Velocidade: %.6f\t Soma Posicao: %.6f\t Media Posicao: %.6f\t Media Velocidade %.6f\n", somaPosicao01, somaVelocidade01, mediaPosicao01, mediaVelocidade01);
        
        i = 0;
        
        // printf("\nDados02\n");
        while( !feof(arqDados02) ){
            fscanf(arqDados02, "%f %f %f", &VetTempoDados02[i], &VetPosicaoDados02[i], &VetVelocidadeDados02[i]);
            somaPosicao02 += VetPosicaoDados02[i];
            somaVelocidade02 += VetVelocidadeDados02[i];
            i++;
        }
    
        mediaPosicao02 = somaPosicao02 / 401;
        mediaVelocidade02 = somaVelocidade02 / 401;   
        fprintf(result2, "Soma Velocidade: %.6f\t Soma Posicao: %.6f\t Media Posicao: %.6f\t Media Velocidade %.6f\n", somaPosicao02, somaVelocidade02, mediaPosicao02, mediaVelocidade02);
        printf("Soma Velocidade: %.6f\t Soma Posicao: %.6f\t Media Posicao: %.6f\t Media Velocidade %.6f\n", somaPosicao02, somaVelocidade02, mediaPosicao02, mediaVelocidade02);

    }
    
    fclose(arqDados01);
    fclose(arqDados02);
    fclose(result1);
    fclose(result2);
    return 0;
}