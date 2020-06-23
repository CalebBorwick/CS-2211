#include <stdio.h>
#include "bst.h"

int main(void)
{
    BStree bst;
    int size, num, trip;
    char quit, str[256];
    printf("Please enter the size of the tree: ");
    scanf("%d", &size);
    bst = bstree_ini(size);
    printf("Enter first key and then int data, separated by whitespace: ");
    while ((scanf("%s %d %d", str, &num, &trip)) == 3) {
        printf("%s, %d, %d\n", str, num, trip);
        bstree_insert(bst, key_construct(str, num), trip);
        printf("Enter Q/q to quit or enter another key: ");
        scanf(" %c", &quit);
        if(quit == 'Q' || quit == 'q')
            break;

        ungetc(quit,stdin);
    }
    bstree_traversal(bst);
    bstree_free(bst);
}


