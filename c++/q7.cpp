# include <iostream>
// último caso dá errado: 1000000000000000 (devia GANHA e dá PERDE)

int main() {
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i*=2) {
        if((2^i) - n == 0) {
            std::cout << "GANHA" << std::endl;
            break;
        } else {
            std::cout << "PERDE" << std::endl;
            break;
        }
    }

    return 0;
}

// se ela escrever um numero que seja maior ou igual a zero e que ele subtraido de 2^n seja igual a 0, ela vence