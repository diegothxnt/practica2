#include <iostream>
using namespace std;

struct Coordenada {
    float x;
    float y;
};

bool colineales(Coordenada c1, Coordenada c2, Coordenada c3) {
    
return (c2.y - c1.y) * (c3.x - c1.x) == (c3.y - c1.y) * (c2.x - c1.x);
}

void ecuacionRecta(Coordenada c1, Coordenada c2) {
    float m = (c2.y - c1.y) / (c2.x - c1.x);
    float b = c1.y - m * c1.x;

    cout << "La ecuacion de la recta es: y = ";
    
    if (m != 0) cout << m << "x ";
    if (b > 0) cout << "+ " << b;
    else if (b < 0) cout << "- " << -b;

    cout << endl;
}

int main() {
    Coordenada c1, c2, c3;

    cout << "Ingrese la primera coordenada (x1 y1)"<<endl; // puede probar con estas coordenadas (x y): (1 , 2) (2 , 4) (3 , 6)
    cin >> c1.x >> c1.y;
    cout << "Ingrese la segunda coordenada (x2 y2)"<<endl;
    cin >> c2.x >> c2.y;
    cout << "Ingrese la tercera coordenada (x3 y3)"<<endl;
    cin >> c3.x >> c3.y;

    if (colineales(c1, c2, c3)) {
        cout << "Las coordenadas son colineales" <<endl;
        ecuacionRecta(c1, c2);
    } else {
        cout << "Las coordenadas no son colineales" <<endl;
    }

    return 0;
}

  