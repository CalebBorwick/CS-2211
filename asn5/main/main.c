#include <stdio.h>
#include <string.h>
#include "../include/matrix.h"

int main(void) {
    BStree tree = bstree_ini();
    Matrix m = tree;

    char *st1 = (char*)malloc(sizeof(char));
    char *st2 = (char*)malloc(sizeof(char));

    int user;
    printf("Enter 0 to exit or 1 to continue: \n");
    scanf("%d", &user);

    while (user==1) {
        printf("Enter 2 strings seperated by a whitespace: \n");
        scanf("%s %s", st1,st2);

        Key key = key_gen(st1, st2);
        Value *value = matrix_get(m, st1, st2);

        if (value!= NULL){
            matrix_inc(m, st1, st2, *value);
        }
        else{
            Data data = data_gen(1);
            bstree_insert(m, key, data);
        }
        printf("Enter 0 to exit or 1 to continue: \n");
        scanf("%d", &user);
    }
    printf("%-11s", "String 1");
    printf("%-11s", "String 2");
    printf("%-11s", "Occurrence\n");
    printf("====================================\n");
    matrix_list(m);
    matrix_destruction(m);

}

