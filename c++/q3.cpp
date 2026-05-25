# include <iostream>

// ou fazer tudo na horizontal ou tudo na vertical

int main() {
    int x, y;
    std::cin >> x >> y;

    int largura = 1;
    int comp = 7;
    
    int qtdde = (x * largura) / (y * comp);
    
    std::cout << qtdde << std::endl;

    return 0;
}

// folha retangular, calcular quantas figuras de 17 cabe em x*n 
