/*Modifique os programas anteriores para que agora tenhamos um vetor de Nodes. Utilize a diretiva
define para definir a quantidade de elementos. */

#include <stdio.h>
#include <stdlib.h>

#define QTD 2

typedef struct  node
{
    int x;
    int y;
    float z;
} Node;

int main(){
    Node *node1;

    node1 = malloc(QTD * sizeof(Node));


    // atribuindo valores
    node1->x = 10;
    node1->y=20;
    node1->z = (float)(node1->x + node1->y)/2;

    (node1+1)->x = 20;
    (node1+1)->y = 30;
    (node1 + 1)->z = (float)((node1+1)->x + (node1+1)->y)/2;

    printf("%.2f \n", node1->z);



    return 0;
}