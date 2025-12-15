#include <iostream>
#include <string>
using namespace std;

int main() {
    int m[3][3];
    int i, j, s=0;
    string t[3] = {"Auto", "Moto", "Camioneta"};

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << "Ingrese " << t[i] << " " << 2020+j << ": ";
            cin >> m[i][j];
            s += m[i][j];
        }
    }

    cout << endl << "Matriz:" << endl;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Autos 2021: " << m[0][1] << endl;
    cout << "Total: " << s << endl;

    return 0;
}
