// Resolução do problema "Lost Numbers"
// no site: https://codeforces.com/problemset/problem/1167/B

#include <bits/stdc++.h>
using namespace std;

set<int> SetA = {4, 8, 15, 16, 23, 42};
vector<int> VectorA = {4, 8, 15, 16, 23, 42};

vector<int> resultado(vector<int> res){
    int primeiro=-1, segundo=-1, terceiro=-1;
    for(int i =0; i<6; i++){
        if (SetA.count(res[0]/VectorA[i])){
            primeiro = VectorA[i];
            segundo = res[0]/VectorA[i];
            break;
        }
    }   
    vector<int> l;

    if(res[1] % primeiro == 0 && SetA.count(res[1]/primeiro) && res[1]/primeiro!=primeiro){
        l = {segundo, primeiro, res[1]/primeiro};
        return l;
    }
    l = {primeiro, segundo, res[1]/segundo};
    return l;
}

int main(){
    vector<int> res1;
    vector<int> res2;
    int paraLeitura;
    for(int i=1; i<6; i++){
        if (i < 3){
            printf("? %d %d\n", i, i+1);
            fflush(stdout);
            scanf("%d", &paraLeitura);
            res1.push_back(paraLeitura);
        }
        else if( i > 3){
            printf("? %d %d\n", i, i+1);
            fflush(stdout);
            scanf("%d", &paraLeitura);
            res2.push_back(paraLeitura);
        }
    }
    vector<int>p1 = resultado(res1);
    vector<int>p2 = resultado(res2);
    printf("!");
    for(int i=0; i<3; i++){
        printf(" %d", p1[i]);
    }
    for(int i=0; i<3; i++){
        printf(" %d", p2[i]);
    }
    return 0;
}