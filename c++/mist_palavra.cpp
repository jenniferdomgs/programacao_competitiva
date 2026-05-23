# include <bits/stdc++.h>

int main() {
    std::string palavra;
    std::cin >> palavra;

    std::string palavra1;
    std::string palavra2;

    for(size_t i = 0; i < palavra.length(); i++) {
        if(i % 2 == 0) {
            palavra1 += palavra[i];
        } else {
            palavra2 += palavra[i];
        }
    }
    std::cout << palavra1 << std::endl;
    std::cout << palavra2 << std::endl;
    return 0;
}