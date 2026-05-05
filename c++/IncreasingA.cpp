# include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numeros(n); 

    for(int i = 0; i < n; i++) {
        cin >> numeros[i];  
    }

    int ans = 0;
    for(unsigned int i = 1; i < numeros.size(); i++) {
        if(numeros[i-1] > numeros[i]) {
            ans += numeros[i-1] - numeros[i];
            numeros[i] = numeros[i-1];
        }
    }
    cout << ans << endl;
    return 0;

}