# Divide and Conquer Contest Problems

**Número da Lista**: 1<br>
**Conteúdo da Disciplina**: Dividir e Conquistar<br>

## Alunos

|Matrícula | Aluno |
| -- | -- |
| 18/0015834  | Eliseu Kadesh Rosa Assunção Júnior  |
| 18/0037242	| Rodrigo Tiago Costa Lima   |

## Sobre 

O objetivo deste projeto é resolver alguns problemas de programação utilizando algoritmos de "Dividir Para Conquistar".

## Instalação 
**Linguagem**: C++<br>

## Pré-requisitos:

- g++ >= 9.4.0;
- make >= 4.2.1;

## Uso 

Existem dois arquivos para cada questão, um .cpp para a compilação e outro .txt em que há algum caso de teste designado para a questão.

Para rodar qualquer uma das questões, primeiro entre na pasta da questão.

```
  cd ./nomeDaQuestão
```

Depois usando make compile o código da questão

```
  make build
```

Agora execute a questão com o binário gerado com o caso de teste exemplo.

```
  make run
```

ou simplesmente compile e rode com um só comando

```
  make
```
### Permutation Transformation - [link](https://codeforces.com/problemset/problem/1490/D)

![Screenshot]()

**Dificuldade:** 1200

**Resolução:**

**Questão accepted**

![Screenshot]()

### Lost Numbers - [link](https://codeforces.com/problemset/problem/1167/B)

![Screenshot]()

**Dificuldade:** 1400

**Resolução:**

**Questão accepted**

![Screenshot]()

### a-Good String - [link](https://codeforces.com/problemset/problem/1385/D)

![Screenshot]()

**Dificuldade:** 1500

**Resolução:**

Para resolver esse problema basta perceber que podemos analisar as metade da string s de forma independente, e ao final precisamos apenas comparar qual das duas tem uma quantidade mínima de mudanças para se tornar uma "a-good string", que uma string que possui n/2 "a"s em uma das suas metades.
 
Tendo isso nós chamamos para cada metade uma função recursiva para calcular a quantidade de "a"s que existe para cada metade, sendo a condição de parada quando houver apenas um caractere, e basta retornar se aquele caractere é ou não um "a", e a função somará 0 se não, e 1 se sim, dai guardamos a quantidade necessária de "a"s que é n/2, subtraído desse acúmulo de quantos "a"s existem na string em uma variável, e eu final da função das duas metades, nós comparamos qual das duas gerou um resultado menor.

**Questão accepted**

![Screenshot]()

### Merge Sort - [link](https://codeforces.com/problemset/problem/873/D)

![Screenshot]()

**Dificuldade:** 1800

**Resolução:**

Primeira coisa que podemos perceber é: se k é par, então não há solução, pois o número de chamadas é sempre ímpar (uma chamada no início, e cada chamada faz 0 ou 2 chamadas recursivas).

Então, se k for ímpar, vamos tentar começar com uma permutação ordenada e tentar "desordenar" ela. Vamos fazer uma função unsort(l, r) que fará isso. Quando "desordenar" um segmento, podemos mantê-lo ordenado (se já fizemos chamadas suficientes) ou torná-lo não ordenado e chamar unsort(l, mid) e unsort(mid, r), se precisarmos de mais chamadas. Quando fazemos um segmento não ordenado, é melhor manter as duas metades ordenadas, uma maneira fácil de lidar com isso é trocar dois elementos do meio.

É fácil ver que o número de chamadas unsort é igual ao número de chamadas mergesort para classificar a permutação resultante, então podemos usar essa abordagem para tentar obter exatamente k chamadas.

**Questão accepted**

![Screenshot]()