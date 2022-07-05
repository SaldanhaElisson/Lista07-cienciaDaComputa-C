/* Modifique o programa anterior adicionando um campo z com a m ́edia aritm ́etica de (x, y). A
m ́edia deve ser calculada por uma fun ̧c ̃ao e a estrutura passada por referˆencia. O tipo de retorno
dessa fun ̧c ̃ao deve ser void.*/


#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
    float z;
} Node;


int main(){
    Node *node1;

    node1 = malloc(sizeof(Node));

    node1->x = 10;
    node1->y=20;

    node1->z = (float)(node1->x + node1->y)/2;
    
    printf("%.2f", node1->z);


    return 0;
}