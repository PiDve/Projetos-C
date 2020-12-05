#include <stdio.h>
// #include <math.h>
// #include <locale.h>
#include <stdlib.h>

//compilar gcc algo.c -o algo.exe -lm
struct threeNum
{
   int n1, n2, n3;
};
int main() {
    FILE *arq;
    int i = 0;
    // int result,i,j;
    //double Vet[401][3];
    float VetTempo[401];
    float VetPosicao[401];
    float VetVelocidade[401];

    arq = fopen("Dados01Equipe4.dat", "rb");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return 0;
    }else{
        while(fscanf(arq, "%f %f %f", &VetTempo[i], &VetPosicao[i], &VetVelocidade[i]) != EOF){
            printf("%.6f  %.6f  %.6f \n", VetTempo[i], VetPosicao[i], VetVelocidade[i]);
            i++;
        }
    }
    // result = fread(&Vet[0], sizeof(int), 3, arq);
    // printf("Nro de elementos lidos: %d\n", result);

    // for (i=0; i<3; i++)
    // {
    //     // for (j=0; j<3; i++)
    //     // {
    //         // printf("%lf\n", Vet[i][j]);
    //     printf("%d\n", Vet[i]);

    //     // }

    // }
    
    fclose(arq);
    return 0;


}