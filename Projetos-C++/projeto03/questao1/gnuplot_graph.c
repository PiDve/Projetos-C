#include <stdio.h>
#include <stdlib.h>
#define GNUPLOT "gnuplot -persist"
  
// gcc gnuplot_graph.c -o gnuplot_graph
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
    // fprintf(gp, "plot sin(x)\n");
    fprintf(gpTempoXPosicaoDados01, "plot 'TempoXPosicaoDados01.txt'\n");
    fprintf(gpTempoXVelocidadeDados01, "plot 'TempoXVelocidadeDados01.txt'\n");
    fprintf(gpPosicaoXVelocidadeDados01, "plot 'PosicaoXVelocidadeDados01.txt'\n");
    
    fprintf(gpTempoXPosicaoDados02, "plot 'TempoXPosicaoDados02.txt'\n");
    fprintf(gpTempoXVelocidadeDados02, "plot 'TempoXVelocidadeDados02.txt'\n");
    fprintf(gpPosicaoXVelocidadeDados02, "plot 'PosicaoXVelocidadeDados02.txt'\n");
    
    fclose(gpTempoXPosicaoDados01);
    fclose(gpTempoXVelocidadeDados01);
    fclose(gpPosicaoXVelocidadeDados01);
    fclose(gpTempoXPosicaoDados02);
    fclose(gpTempoXVelocidadeDados02);
    fclose(gpPosicaoXVelocidadeDados02);
    
}