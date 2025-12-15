#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char p[9];
    int i, f=1;

    cout << "Placa: ";
    cin >> p;

    if(strlen(p) != 7) {
        f=0;
    } else {
        for(i=0; i<7; i++) {
            p[i] = toupper(p[i]);
            if(i<3) {
                if(!isalpha(p[i])) f=0;
            } else {
                if(!isdigit(p[i])) f=0;
            }
        }
    }
    cout<<"Placa :"p<<endl;
    if(f==1) cout << "Valida" << endl;
    else cout << "No valida" << endl;

    return 0;
}
