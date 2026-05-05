# include <iostream>

int main() {
    std::string seq;
    std::cin >> seq;
    int maiorSeq = 1;
    int cont = 1;
    
    for(size_t i = 1; i < seq.length(); i++) {
        if(seq[i] == seq[i-1]) {
            cont++;
        } else {
            if(cont > maiorSeq) {
                maiorSeq = cont;
            }
            cont = 1;
        }
        if(cont > maiorSeq) {
            maiorSeq = cont;
        }
    }
    std::cout << maiorSeq << std::endl;
    return 0;
}