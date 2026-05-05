#include <bits/stdc++.h> // inclui iostream vector string
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> votos(n); 

    for (int i = 0; i < n; i++) {
        cin >> votos[i];
    }

    string vencedor;
    int maxVotos = 0;

    for (int i = 0; i < n; i++) {
        int cont = 0;
        for (int j = 0; j < n; j++) {
            if (votos[j] == votos[i]) {
                cont++;
            }
        }
        if (cont > maxVotos) {
            maxVotos = cont;
            vencedor = votos[i];
        }
    }

    cout << vencedor << endl;
    return 0;
}