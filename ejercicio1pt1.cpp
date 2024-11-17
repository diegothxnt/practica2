#include <iostream>
using namespace std;


struct Coordenada {
    float x;
    float y;
};

int main() {
    Coordenada coord;
    char continuar;

    
        
        cout << "Ingrese la coordenada X"<<endl;
        cin >> coord.x;
        cout << "Ingrese la coordenada Y"<<endl;
        cin >> coord.y;

        
        int cuadrante = (coord.x > 0) * 1 + (coord.x < 0) * 2 + (coord.y > 0) * 4 + (coord.y < 0) * 8;

        switch (cuadrante) {
            case 5:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el Cuadrante 1"<<endl;
                break;
            case 6:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el Cuadrante 2"<<endl;
                break;
            case 10:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el Cuadrante 3"<<endl;
                break;
            case 9:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el Cuadrante 4"<<endl;
                break;
            case 1:
            case 2:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el eje X"<<endl;
                break;
            case 4:
            case 8:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el eje Y"<<endl;
                break;
            default:
                cout << "La coordenada (" << coord.x << " , " << coord.y << ") esta en el origen"<<endl;
                break;
        }

        

    return 0;
}