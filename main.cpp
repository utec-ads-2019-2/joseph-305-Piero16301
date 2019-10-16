#include<bits/stdc++.h>

using namespace std;

int posiblesResultados[] = {0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881};

int main() {
    int numero;
    while(scanf("%d",&numero) && numero) {
        cout << posiblesResultados[numero] << endl;
    }
    return 0;
}