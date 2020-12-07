#include <stdio.h>
#include <stdlib.h>
#define GNUPLOT "gnuplot -persist"
  
// gcc gnuplot_graph.c -o gnuplot_graph.exe -lm
// ./gnuplot_graph 
int main(int argc, char **argv)
{
    FILE *gpTempoXPosicaoDados01,
    *gpTempoXVelocidadeDados01,
    *gpPosicaoXVelocidadeDados01,
    *gpTempoXPosicaoDados02,
    *gpTempoXVelocidadeDados02,
    *gpPosicaoXVelocidadeDados02;
    
    gpTempoXPosicaoDados01 = popen(GNUPLOT, "w");
    gpTempoXVelocidadeDados01 = popen(GNUPLOT, "w");
    gpPosicaoXVelocidadeDados01 = popen(GNUPLOT, "w");
    gpTempoXPosicaoDados02 = popen(GNUPLOT, "w");
    gpTempoXVelocidadeDados02 = popen(GNUPLOT, "w");
    gpPosicaoXVelocidadeDados02 = popen(GNUPLOT, "w");
    
    
    if (gpTempoXPosicaoDados01 == NULL || gpTempoXVelocidadeDados01 == NULL || gpPosicaoXVelocidadeDados01 == NULL || gpTempoXPosicaoDados02 == NULL || gpTempoXVelocidadeDados02 == NULL || gpPosicaoXVelocidadeDados02 == NULL) {
        printf("Erro ao abrir pipe para o GNU plot.\n"
            "Instale gnuplot'\n");
        exit(0);
    }

    
    fprintf(gpTempoXPosicaoDados01, "set output 'TempoXPosicaoDados01.pdf'\nset term pdf enhanced color\nset xlabel 'Tempo' font 'Arial, 16'\nset ylabel 'Posicao' font 'Arial, 19'\nset grid\nplot 'TempoXPosicaoDados01.txt' using 1:2 with lines linewidth 2\n");
    fprintf(gpTempoXVelocidadeDados01, "set output 'TempoXVelocidadeDados01.pdf'\nset term pdf enhanced color\nset grid\nset xlabel 'Tempo' font 'Arial, 16'\nset ylabel 'Velocidade' font 'Arial, 19'\nplot 'TempoXVelocidadeDados01.txt' using 1:2 with lines linewidth 2\n");
    fprintf(gpPosicaoXVelocidadeDados01, "set output 'PosicaoXVelocidadeDados01.pdf'\nset term pdf enhanced color\nset grid\nset xlabel 'Posicao' font 'Arial, 16'\nset ylabel 'Velocidade' font 'Arial, 19'\nset grid\nplot 'PosicaoXVelocidadeDados01.txt' using 1:2 with lines linewidth 2\n");
    
    fprintf(gpTempoXPosicaoDados02, "set output 'TempoXPosicaoDados02.pdf'\nset term pdf enhanced color\nset grid\nset xlabel 'Tempo' font 'Arial, 16'\nset ylabel 'Posicao' font 'Arial, 19'\nset grid\nplot 'TempoXPosicaoDados02.txt' using 1:2 with lines linewidth 2\n");
    fprintf(gpTempoXVelocidadeDados02, "set output 'TempoXVelocidadeDados02.pdf'\nset term pdf enhanced color\nset grid\nset xlabel 'Tempo' font 'Arial, 16'\nset ylabel 'Velocidade' font 'Arial, 19'\nset grid\nplot 'TempoXVelocidadeDados02.txt' using 1:2 with lines linewidth 2\n");
    fprintf(gpPosicaoXVelocidadeDados02, "set output 'PosicaoXVelocidadeDados02.pdf'\nset term pdf enhanced color\nset grid\nset xlabel 'Posicao' font 'Arial, 16'\nset ylabel 'Velocidade' font 'Arial, 19'\nset grid\nplot 'PosicaoXVelocidadeDados02.txt' using 1:2 with lines linewidth 2\n");
    
    fclose(gpTempoXPosicaoDados01);
    fclose(gpTempoXVelocidadeDados01);
    fclose(gpPosicaoXVelocidadeDados01);
    fclose(gpTempoXPosicaoDados02);
    fclose(gpTempoXVelocidadeDados02);
    fclose(gpPosicaoXVelocidadeDados02);
    
}