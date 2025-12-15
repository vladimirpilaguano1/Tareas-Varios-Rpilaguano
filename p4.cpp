#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct Veh {
    char p[9];
    char m[20];
    int t;
    int a;
    int v;
};

int main() {
    Veh v[3];
    int c[4] = {0, 0, 0, 0};
    int i, k, f, tot=0;

    for(i=0; i<3; i++) {
        do {
            f = 1;
            cout << "Placa: ";
            cin >> v[i].p;
            if(strlen(v[i].p) != 7) f=0;
            for(k=0; k<7; k++) {
                v[i].p[k] = toupper(v[i].p[k]);
                if(k<3 && !isalpha(v[i].p[k])) f=0;
                if(k>=3 && !isdigit(v[i].p[k])) f=0;
            }
            if(f == 0) cout << "Datos incorrectos" << endl;
        } while(f == 0);

        cout << "Marca: "; cin >> v[i].m;
        cout << "Tipo 1.Autos2.Motos3.Camionetas(1-3): "; cin >> v[i].t;
        cout << "Año: "; cin >> v[i].a;

        if(v[i].a < 2020) v[i].v = 150;
        else if(v[i].a <= 2022) v[i].v = 100;
        else v[i].v = 80;

        c[v[i].t]++;
        tot += v[i].v;
    }

    cout << endl;
    cout << "PLACA   MARCA   TIPO   AÑO   VALOR" << endl;
    for(i=0; i<3; i++) {
        cout << v[i].p << "   " << v[i].m << "   " << v[i].t << "   " << v[i].a << "   " << v[i].v << endl;
    }

    cout << "Autos: " << c[1] << endl;
    cout << "Motos: " << c[2] << endl;
    cout << "Camionetas: " << c[3] << endl;
    cout << "Total: " << tot << endl;

    return 0;
}
