#include <stdio.h>
#include <stdlib.h>
/*1)Faça um algoritmo que recebe uma lista linear simplesmente encadeada l1 e
retorna uma lista linear simplesmente encadeada l2 com o mesmo
comprimento de l1. O K-ésimo nó de l2 possui o valor da soma dos k primeiros
nós de l1.
Protótipo: SLList *sllComulativeSum(SLList* l1, int (*getvalue)(void*));
A função getvalue retorna o valor inteiro armazenado no campo data de cada
nó.*/
SLList *sllComulativeSum(SLList *l1, int (*getvalue)(void*)){
    SLList *l2 = (SLList*)malloc(sizeof(SLList)*l1);
    if(l1 != NULL && l2 != NULL){
        if(l1->first!=NULL){
            int cur = l1->first
            
        }
    }
}


/*Faça um algoritmo que recebe duas listas lineares simplesmente encadeadas l1
e l2 e três valores inteiros i1, i2 e len e insere os nós da lista l2, começando após
o 12-ésimo e continuando por len nós, na lista l1, começando antes do i1-ésimo
nó. Nenhum elemento da lista deverá ser removido ou substituído. Se

i1>length(l1)+1(onde length(l1) indica o número de nós na lista), ou se 12+len-
1>length(l2), ou se i1<1, ou se i2<1, retorne FALSE. Os nós devem ser removidos

de l2 e incluídos em l1. Não pode alocar novos nós.
Protótipo: int inSub(SLList *l1, int i1, int i1, int len);*/
int inSub(SLList *l1, int i1, int i1, int len){

}
/*3)Escreva um algoritmo que recebe uma fila armazenada em uma lista linear
simplesmente encadeada e promove o último elemento da fila n posições para
a frente e pune o primeiro elemento da fila colocando-o uma posição para trás.
Não pode alocar novos nós da lista.*/

void promoteAndPunish(SLList *queue, int n) {
    if (queue == NULL || queue->first == NULL || queue->first->next == NULL) {
        return; // Não há elementos suficientes para promover ou punir
    }

    // Promover o último nó
    SLNode *cur = queue->first;
    SLNode *prev = NULL;
    SLNode *last = queue->last;

    // Encontrar o nó anterior ao último
    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }

    // 'cur' é o último nó e 'prev' é o nó anterior ao último
    if (prev != NULL) {
        prev->next = NULL;
        queue->last = prev;

        // Encontrar a posição para inserir o nó promovido
        SLNode *insertPos = queue->first;
        SLNode *insertPrev = NULL;

        for (int i = 0; i < n && insertPos != NULL; i++) {
            insertPrev = insertPos;
            insertPos = insertPos->next;
        }

        if (insertPrev != NULL) {
            insertPrev->next = last;
        } else {
            queue->first = last;
        }

        last->next = insertPos;
    }

    // Punir o primeiro nó
    if (queue->first != NULL && queue->first->next != NULL) {
        SLNode *first = queue->first;
        SLNode *second = first->next;

        queue->first = second; // O segundo nó se torna o primeiro
        first->next = second->next; // O primeiro nó é movido para a posição do segundo
        second->next = first;

        // Se o nó punido foi movido para o final da lista, atualize o último nó
        if (first->next == NULL) {
            queue->last = first;
        }
    }
}

/*4)Escreva um algoritmo que recebe uma lista linear simplesmente encadeada e
elimina os nós de ordem ímpar.*/
void removeOddNodes(SLList* l){
    if(l != NULL && l->first != NULL){
        int pos = 0; 
        SLNode *cur = l->first;
        SLNode *prev = NULL;
        while(cur != NULL){
            if(pos % 2 != 0){
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            } else {
                prev = cur;
                cur = cur->next;
            }
            pos++;
        }
    }
}

/*REVER!!*/
/*Escreva um algoritmo ÉInversa(l1,l2) que retorna 1 se a lista l1 tem os mesmos
elementos de l2 na ordem inversa, -1 se l1 tem menos elementos que l2 e 0 se l1
tem mais elementos que l2. Ambas as listas são lineares simplesmente
encadeadas. Não pode alocar novos nós nem usar outra estrutura de dados
auxiliar.
Protótipo: int EInversa(SLList* l1, SLList* l2);*/
int EInversa(SLList* l1, SLList* l2){
    if(l1!=NULL && l2!=NULL && l1->first!=NULL && l2->first!=NULL){
        SLNode *cur1 = l1->first;
        SLNode *cur2= l2->first;
        SLNode *prev2 = NULL;
        int len1 = 0, len2 = 0;
        //Verificar o tamanho das listas
        //Verifica o tamanho da lista1
        while(cur1 != NULL){
            cur1 = cur1->next;
            len1++;
        }
        //Verifica o tamanho da lista 2
        while(cur2 != NULL){
            prev2 = cur2;
            cur2 = cur2->next;
            len2++;
        }
        if(len1>len2){
            return 0;
        }
        else if(len1<len2){
            return -1;
        }
        //Verifica se l1 tem os mesmos elementos de l2 na ordem inversa
        cur1 = l1->first; //Precisamos colocar cur1 como o primeiro elemento da fila pois no while de len ele ficou sendo o ultimo
        while(cur1!=NULL && cur2!=NULL){
            cur1 = cur1->next;
            cur2 = cur2->prev2
            prev2 = cur2->prev2;
            if(cur1->data == cur2->data){
                return 1;
            }
        }
    }
}
/*REVER!!!*/
/*6)Remover o k-ésimo nó da lista linear l.
Protótipo: Remove-k(SLList* l, int k);*/
int Remove_k(SLList *l, int k){
    if(l!=NULL && l->first !=NULL){
        SLNode *cur = l->first;
        SLNode *prev = NULL;
        int pos = 0;
        while(cur->next!=NULL && pos < k){
            prev = cur;
            cur = cur->next;
            pos++;
        } 
        if(k == pos){
            //Se é o primeiro nó
            if(cur == l->first){
                l->first = cur->next
            }
            else{
                prev->next = cur->next
            }
            free(cur);
        }
    }
}
int Remove-k(SLList *l, int k){
    if(l!=NULL){
        if(l->first!=NULL){
            SLLnode cur = l->first, prev = NULL;
            while(cur->next != NULL){
                cur = cur->next;
                prev = cur;
                if(cur->data == k){
                    prev->next =cur->next;
                }
            }
        }
        return k;
    }
}

/*7. Escreva um algoritmo que recebe uma lista linear simplesmente encadeada e
elimina os nós de ordem par.*/
//Meu codigo errado
void EliminaNosPares(SLList* l){
    if(l!=NULL && l->first != NULL){
        int pos = 0;
        SLNode *cur = l->first;
        SLNode *prev = NULL;
        while(cur!=NULL){
            prev = cur;
            cur = cur->next;
            pos++
            if(pos%2 == 0){
                prev->next = cur->next;
                free(cur);
            }
        }
    }
}
//COdigo corrigido pelo copilot
void EliminaNosPares(SLList* l){
    if(l!=NULL && l->first != NULL){
        int pos = 0;
        SLNode *cur = l->first;
        SLNode *prev = NULL;
        while(cur!=NULL){
            if(pos%2 == 0){
                prev->next = cur->next;
                SLNode *temp = cur;
                cur = cur->next;
                free(temp);
            } else {
                prev = cur;
                cur = cur->next;
            }
            pos++;
        }
    }
}

/*8. Escreva um algoritmo que recebe uma fila armazenada em uma lista linear
simplesmente encadeada e promove o último elemento da fila n posições para
frente. Não pode alocar novos nós da lista.*/
// Cabeçalho da função para promover o último elemento da fila n posições para frente
void promoverUltimoElemento(SLList* f, int n){
    if(f!=NULL && f->first!=NULL){
        SLNode *cur = l->first;
        SLNode *prev = NULL;
        while(cur!=NULL){
            prev = cur;
            cur = cur->next;

        }
    }
}

/*9. Faça um algoritmo Intercala(l1,l2) que retorna uma lista com os elementos de l1
e l2 intercalados. Não pode alocar novos nós.*/

/*10. Faça um algoritmo que recebe duas listas lineares simplesmente encadeadas
(l1 e l2) e retorna na lista l3 os elementos que estão ao mesmo tempo em l1 e l2,
removendo-os das duas listas anteriores. Pode usar a função e desalocação de
nós, não pode alocar novos nós, considere l3 criada e vazia;
Protótipo: void ComumDasListas(SLList *l1, SLList* l2, SLList* l3, int
(*cmp)(void*,void*);
A função cmp retorna TRUE se a==b e FALSE caso contrário.*/

/*11. Faça um algoritmo que recebe duas listas e retorna a intersecção entre elas, sem o uso de memória adicional.
sll* IntersecLista(sll* l1, sll* l2, sll* l3);*/

/*12. Faça um algoritmo que recebe duas listas e retorna a subtração entre elas(l1- l2), sendo esses os elementos que diferem entre elas.
sll subtraiLista(sll* l1, sll* l2, sll* l3);*/

//prova da pagina 1 do PDF
/*13. Escreva um algoritmo Incomuns (L1 ,L2) , que deve retomar um
valor inteiro igual ao número de valores que estão em L 1 e não estão em
L2. L1 e L2 são lineares simplesmente encadeadas.
int Incomuns ( SLList * 11, SLList 12, int (*cmp) (void *, void *));*/

//prova da pagina 1 do PDF
/*Escreva um algoritmo insere um novo dado após o k-esimo nó
contado a partir do final de uma lista linear simplesmente encadeada.
int InsereApósKesimDoFinal ( SLList *l, int k, void *data)*/

//PROVA DA PAG 9 DO PDF
/*A inserção de um dado em uma lista simplesmente encadeada circular antes de um nó especificado pelo campo data*/



