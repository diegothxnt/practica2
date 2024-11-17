#include <iostream>
#include <cmath>

struct Coordenada {
    int x;
    int y;
};


double calcularDistancia(const Coordenada& p1, const Coordenada& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


double obtenerDistanciaMaxima(Coordenada puntos[], int totalPuntos, int limiteXMin, int limiteXMax, int limiteYMin, int limiteYMax) {
    double distanciaMaxima = 0.0;

    
    for (int i = 0; i < totalPuntos; ++i) {
       
        if (puntos[i].x >= limiteXMin && puntos[i].x <= limiteXMax &&
            puntos[i].y >= limiteYMin && puntos[i].y <= limiteYMax) {

            for (int j = i + 1; j < totalPuntos; ++j) {
                
                if (puntos[j].x >= limiteXMin && puntos[j].x <= limiteXMax &&
                    puntos[j].y >= limiteYMin && puntos[j].y <= limiteYMax) {
                    
                    double distancia = calcularDistancia(puntos[i], puntos[j]);
                    
                    if (distancia > distanciaMaxima) {
                        distanciaMaxima = distancia;
                    }
                }
            }
        }
    }

    return distanciaMaxima;
}

int main() {
    
    Coordenada puntos[] = {
        {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}
    };
    int totalPuntos = sizeof(puntos) / sizeof(puntos[0]);

   
    int limiteXMin = 2, limiteXMax = 8, limiteYMin = 3, limiteYMax = 9;

    
    double maxDistancia = obtenerDistanciaMaxima(puntos, totalPuntos, limiteXMin, limiteXMax, limiteYMin, limiteYMax);

    
    std::cout << "La distancia maxima entre dos puntos dentro del area es: " << maxDistancia << std::endl;

    return 0;
}
