#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
        double tTotalEmHoras = (tB - tA)/3600.0;
        double velocidadeMedia = distancia/tTotalEmHoras;
        return velocidadeMedia;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
        double velocidadeMedia = calculaVelocidadeMedia(tA, tB, distancia);
        if(velocidadeMedia > velocidadeMaxima)
                return 1;
        else
                return 0;
}
