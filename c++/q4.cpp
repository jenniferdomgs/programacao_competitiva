# include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    std::cin >> n;
    int num[n];
    int soma = 0;

    for(int i = 0; i < n; i++) {
        std::cin >> num[i];
    }

    for(int i = 0; i < n; i++) {
        soma += num[i];
    }

    if(n == 1) {
        std::cout << 1 << std::endl;
    } else if(soma % n != 0) { 
        std::cout << soma << std::endl;
    }
     
        
    
    return 0;
}


// Cada amigo contemplado deve receber figurinhas de uma ´unica sele¸c˜ao (ou seja, figurinhas que est˜ao
// em uma mesma pilha);
// Todos os amigos contemplados devem receber a mesma quantidade de figurinhas;
// Todas as figurinhas de Ada devem ser distribu´ıdas (isto ´e, nenhuma figurinha deve permanecer com
// Ada