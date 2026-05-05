#include <bits/stdc++.h> // inclui iostream vector string
using namespace std;

int main() {
    int n, minN; // num de competidores e num minimo de competidores classificados
    cin >> n >> minN;
    vector<int> pontos(n); // pontuações

    for(int i = 0; i < n; i++) {
        cin >> pontos[i];
    }

    // ordena em ordem decrescente
    sort(pontos.begin(), pontos.end(), greater<int>()); 

    int cont = minN;

    while(cont < n && pontos[cont] == pontos[minN - 1]) {
        cont++;
    }

    cout << cont << endl;
    return 0;
}
