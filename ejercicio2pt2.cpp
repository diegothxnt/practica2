#include <iostream> 
#include <cmath>


struct Punto {
    int x;
    int y;
};


double calcularDistancia(const Punto& p1, const Punto& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


void imprimirDistanciasDesdeUnPunto(Punto puntos[], int numPuntos, int indice, int xMin, int xMax, int yMin, int yMax) {
    if (indice < 0 || indice >= numPuntos) {
        std::cout << "Índice fuera de rango." << std::endl;
        return;
    }

    Punto puntoReferencia = puntos[indice];
    std::cout << "Distancias desde el punto (" << puntoReferencia.x << ", " << puntoReferencia.y << ") a otros puntos dentro del cuadrante:" << std::endl;

    for (int i = 0; i < numPuntos; i++) {
        if (i != indice && puntos[i].x >= xMin && puntos[i].x <= xMax && puntos[i].y >= yMin && puntos[i].y <= yMax) {
            double distancia = calcularDistancia(puntoReferencia, puntos[i]);
            std::cout << "Distancia a punto (" << puntos[i].x << ", " << puntos[i].y << ") es: " << distancia << std::endl;
        }
    }
} 

int main() {
    
    Punto puntos[] = {
        {1 , 2}, {3 , 4}, {5 , 6}, {7 , 8}, {9 , 10}
    };
    int numPuntos = sizeof(puntos) / sizeof(puntos[0]);

    
    int xMin = 2, xMax = 8, yMin = 3, yMax = 9;

    
    int indicePuntoReferencia = 1; // Cambia este índice para elegir otro punto de referencia
    imprimirDistanciasDesdeUnPunto(puntos, numPuntos, indicePuntoReferencia, xMin, xMax, yMin, yMax);

    return 0;
}
