#include <stdio.h>
#include <stdlib.h>

/*1. Escreva um algoritmo que recebe uma lista circular duplamente
encadeada L e remove um elemento especificado pela chave Key,
juntamente com seu vizinho anterior.
int RemoveEspecificadoEAnterior ( DLList *l, void *key,
int (*cmp)( void*, void*))

cmp reton1a TRUE se os dois argumentos forem iguais.*/
int RemoveEspecificadoEAnterior ( DLList *l, void *key, int (*cmp)( void*, void*)){

}

/*2. Faça un: algoritmo que recebe uma lista circular duplamente
encadeada L e duas chaves key 1 e key2 e troca a posição do nó identificado
por key l pe!& posição do nó identificado por key2. Não pode trocar
simplesmente os dados, precisa trocar os nós de lista.
int InterchangeNodes (DLList *l, void *keyl, void *key2,
int (*cmp) (void *, void *));
cmp retoma TRUE se os dois argumentos forem iguais.*/
int InterchangeNodes (DLList *l, void *keyl, void *key2,
int (*cmp) (void *, void *)){

}
//PROVA DA PAG 2 DO PDF
/*1) Escreva um algoritmo ÉInversa (L1, L2) que retorna 1 se a lista L1 tem os
mesmos elementos de L2 na ordem inversa, -1 se L1 tem menos elementos que L2 e 0
se L1 tem mais elementos que L2. Ambas as listas são circulares duplamente
encadeadas. Não pode alocar novos nós nem usar uma outra estrutura de dados auxiliar.
int ÉInversa ( DLList *l1, DLList *l2)*/

//PROVA DA PAG 2 DO PDF
/*2) Escreva um algoritmo que recebe três listas lineares duplamente encadeadas L1,
L2 e L3. E, retorna a Lista L3 com os nós de L1 que estão que tem um igual em L2
(data), ou seja que estão presentes em ambas as listas (L1 e L2). Não pode alocar novos
nós. L3 é recebida pelo algoritmo sem nenhum nó (vazia). Os elementos incluídos em
L3 devem ser retirados da lista L1.
void PegaElementosIguais(DLList *l1, DLList *l2, DLList *l3)*/

//PROVA DA PAG 3 DO PDF
/*1) Escreva um algoritmo para remover o k-ésimo nó de uma lista
circular duplamente encadeada l.
void *RemoveKEsimo( DLList *l, int k)*/

//PROVA DA PAG 3 DO PDF
/*2) Escreva um algoritmo NumComuns (L1, L2) , que deve retornar um
valor inteiro igual ao número de valores comuns às duas listas L1 e L2, que
são circulares duplamente encadeadas.
int NumComuns ( Dllist * l1, Dllist l2, int (*cmp) (void *, void *));*/

//PROVA DA PAG 5 DO PDF
/*Faça um algoritmo que receve uma lista linear duplamente encadeada e dois números inteiros i e j. O algoritmo deve trocar a posição do i-ésimo nó da lista pela do j-ésimo nó da lista. Não pode alocar novos nós.
int DllCumulativeSum(DLList *l1, int i, int j)*/

//PROVA DA PAG 6 DO PDF
/*Faça um algoritmo que recebe duas listas lineares duplamente encadeadas(LL1 e LL2), 
como mostrado na figura abaixo, verifica se elas compartilham um nó e encontra o nó que pertence às
duas listas removendo-o da lista LL1.*/

//PROVA DA PAG 6 DO PDF
/*Escreva um algoritmo copia (L1,L2) para montar uma cópia de L2 da lista L1 (ambas duplamente encadeada e linear), de modo que os elementos de L2 estejam em L1 na ordem inversa.*/

//PROVA DA PAG 8 DO PDF
/*Escreva um algoritmo que recebe uma lista circular duplamente encadeda L  e remove um elemento especificado pela chave Key, juntamente com seus dois vizinhos (próximo e anterior).
int RemoveOCaraEOsVizinhos(DLList *l, void *key, int (*cmp)(void*, void*))*/

//PROVA DA PAG 8
/*considere uma lista onde cada um de seus nós é do tipo Nó de lista duplamente encadeada. Noe entanto durante sua construção os encadeamentos foram realizados como se fosse uma lista linear simplesmente encadeada. Faça um algoritmo que recebe o gerente desta lista e corrige os encadeadmentos para que esta lista fique realmente como lista circular duplamente encadeada*/

//PROVA DA PAG 10
/*Escreva um algoritmo que recebe tres liostas lineares duplamente encadeadas L1, L2 e L3, e retorna a lista L3 copm os nós que estão presentes em ambas as listas (L1 e L2). Nào pode alocar novos nós. L3 é recebida pelo algoritmo sem nenhum nó. Os elementos incluídos em L3 devem ser retirados da lista onde estavam
void PegaELementosIguais(DLList *l1, DLList *l2, DLList *l3)*/

//PROVA DA PAG 11
/*Escreva um algoritmo inverte(L1, L2) para que retorne na lista L2 todos os nós da lista L1 na ordem inversa em que estavam (ambas duplamente encadeada e linear). Não pode alocar novos nós nem usar uma outra estrutura de dados auxiliar.*/