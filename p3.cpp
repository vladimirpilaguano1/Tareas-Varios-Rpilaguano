#include <iostream>
using namespace std;

struct Veh {
    char p[10];
    char m[20];
    int a;
    int v;
};

int main() {
    Veh l[3];
    int i;

    for(i=0; i<3; i++) {
        cout << "Ingrese Placa: "; cin >> l[i].p;
        cout << "Ingrese Marca: "; cin >> l[i].m;
        cout << "Ingrese Año: "; cin >> l[i].a;

        if(l[i].a < 2020) l[i].v = 150;
        else if(l[i].a <= 2022) l[i].v = 100;
        else l[i].v = 80;
    }

    cout << endl;
    cout << "PLACA   MARCA   AÑO   VALOR" << endl;

    for(i=0; i<3; i++) {
        cout << l[i].p << "   " << l[i].m << "   " << l[i].a << "   " << l[i].v << endl;
    }

    return 0;
}
