/*4. Modifique Node para que a tenha um elemento ponteiro prox do tipo struct node. Esse ponteiro
deve apontar para um pr ́oximo node do vetor, sendo que o  ́ultimo deve apontar para o primeiro.
Imprima a m ́edia do node atual e do seguinte. */

#include <stdio.h>
#include <stdlib.h>

#define QTD 2

typedef struct  node
{
    int x;
    int y;
    float z;
    struct node *prox;
} Node;


int main(){
    Node *node1;

    node1 = malloc(QTD * sizeof(Node));


    // atribuindo valores
    node1->x = 10;
    node1->y=20;
    node1->z = (float)(node1->x + node1->y)/2;

    node1->prox = (node1+1);

    (node1+1)->x = 20;
    (node1+1)->y = 30;
    (node1 + 1)->z = (float)((node1+1)->x + (node1+1)->y)/2;


    printf("%.2f \n", node1->z);
    printf("%d", (node1)->prox->x);



    return 0;
}