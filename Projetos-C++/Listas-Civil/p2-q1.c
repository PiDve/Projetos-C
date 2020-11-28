#include <stdio.h> //para pegar printf e scanf
#include <locale.h> //para pegar acentuação de português no print

//compilar gcc p2-q1.c -o p2-q1.bin -lm

// Bubble Sort
int main(){/* função global para execução do código */
    
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    
    int i=0;/* i é um inteiro contador */
    float buffer=0.0, /* buffer é um float para trocar valores no vetor */ 
    vetor[9]; /* vetor de float de 10 posições iniciando no 0 */

    while (i <= 9) /* Laço para pegar todos os 10 valores do array */
    {
        printf("valor %d: \n", i+1); /* print para perguntar o valor do próximo termo */
        scanf("%f", &vetor[i]); /* scanf grava o valor digitado pelo usuário para prózima posição do array */
        i++; /* Contador que determina a até quando repetir no while */
    }
    
    int len = sizeof(vetor)/sizeof(int); //pegando o tamanho do vetor
    
    for(i=0;i<len+1;i++) //repetição que verifica todo o array
    {
        if( i >= 1) //Condição para entrar na ordenação
        {
            if (vetor[i] < vetor[i-1]) // Se o valor atual for menor que o anterior
            {
                while( (vetor[i] < vetor[i-1]) && (i < 10) ) //repetição enquanto o vetor atual for menor que o anterior
                {
                    buffer = vetor[i-1]; //buffer para vetor anterior
                    vetor[i-1] = vetor[i]; //vetor anterior recebe valor de atual
                    vetor[i] = buffer; //vetor atual recebe o valor de anterior
                    i++; //vai percorrendo até escapar da condição
                }                
                i = 0; // indice é resetado para continuar empurrando os valores maiores até todos estarem ordenados
            }
        }    
    }
    
    for(i=0;i<10;i++) //repetição para imprimir na tela os valores ordenados do array
        printf("%.2f ", vetor[i]);
         
    printf("\n"); //quebra de linha
    
    return 0;
}