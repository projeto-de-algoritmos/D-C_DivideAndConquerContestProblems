// Resolução do problema "Permutation Transformation"
// no site: https://codeforces.com/problemset/problem/1490/D

#include <bits/stdc++.h>
using namespace std;
int k[120][120];
int resultado[120][120];
int caso = 0;

int descobrindoMaior(int lista[], int comeco, int fim){
    int maior = -1, pos= 0;
    for(int i= comeco; i<=fim; i++){
        if(lista[i] > maior){
            maior = lista[i];
            pos = i;
        }
    }
    return pos;
}

void dividir(int comeco, int fim, int profundidade){
    int pos;
    if(comeco > fim) pos = comeco;
    else if(comeco == fim) pos = comeco;
    else{
        pos = descobrindoMaior(k[caso], comeco, fim);
        resultado[caso][pos] = profundidade;
        dividir(comeco, pos-1, profundidade+1);
        dividir(pos+1, fim, profundidade+1);
    }
    resultado[caso][pos] = profundidade;
}

int main(){
    int n, elementos;
    scanf("%d", &n);
    for(; caso < n; caso++){
        scanf("%d", &elementos);
        for(int i=0; i<elementos; i++){
            scanf("%d", &k[caso][i]);
        }
        dividir(0, elementos-1, 0);
        for(int j=0; j<elementos; j++){
            printf("%d ", resultado[caso][j]);
        }
        printf("\n");            
    }   
};
