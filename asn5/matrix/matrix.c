
#include "../include/matrix.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Matrix matrix;

/**
 *  * Matrix construction using bstree ini();
 *   *
 *    * @return
 *     */
Matrix matrix_construction(void){
    matrix = bstree_ini();
    return matrix;
}

/**
 *  *  If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
 *   *
 *    * @param m
 *     * @param index1
 *      * @param index2
 *       * @return
 *        */
unsigned char matrix_isin(Matrix m, Index index1, Index index2){
    Key key = key_gen(index1, index2);
    Data search = bstree_search(m, key);
    if(search==NULL){
        return 0;
    }
    else{
        return 1;
    }
}

/**
 *  *If location (index1, index2) is defined in Matrix m, then return a pointer to the associated
 *      value. Otherwise, return NULL.
 *       *
 *        * @param m
 *         * @param index1
 *          * @param index2
 *           * @return
 *            */
Value *matrix_get(Matrix m, Index index1, Index index2){
    Key key = key_gen(index1, index2);
    Data dt = bstree_search(m, key);
    return dt;
}

/**
 *  * Recursive matrix set function
 *   *
 *    * @param node
 *     * @param key
 *      * @param data
 *       */
void matrix_rec_set(BStree_node *node, Key key, Data data){
    int comp = key_comp(key, node->key);
    if (comp==0){
        *node->data = *data;
    }
    else if (comp>0){
        if(node->right!=NULL){
            matrix_rec_set(node->right, key, data);
        }
    }
    else if(comp<0){
        if (node->left!=NULL) {
            matrix_rec_set(node->left, key, data);
        }
    }


}

/**
 *  *Assign value to Matrix m at location (index1, index2). If that location already has value,
 *  then overwrite.
 *   *
 *    * @param m
 *     * @param index1
 *      * @param index2
 *       * @param value
 *        */
void matrix_set(Matrix m, Index index1, Index index2, Value value){
    Key key = key_gen(index1, index2);
    Data dt = data_gen(value);
    if (*m != NULL){
        matrix_rec_set(*m, key, dt);
    }

}

/**
 *  *Recursive matrix inc
 *   *
 *    * @param current
 *     * @param key
 *      * @param data
 *       * @return
 *        */
BStree_node *matrix_inc_rec(BStree_node *current, Key key, Data data){
    int compValue = key_comp(key, current->key);
    if (compValue>0){
        if(current->right!=NULL){
            matrix_inc_rec(current->right, key, data);
        }
    }
    else if(compValue<0){
        if(current->left!=NULL){
            matrix_inc_rec(current->left, key, data);
        }
    }
    else{
        return current;
    }
    return current;
}

/**
 *  *If location (index1, index2) is defined in Matrix m, then increase the associated value by
 *      value. Otherwise, report error.
 *       *
 *        * @param m
 *         * @param index1
 *          * @param index2
 *           * @param value
 *            */
void matrix_inc(Matrix m, Index index1, Index index2, Value value){
    Key key = key_gen(index1, index2);
    Data dt = data_gen(value);
    if(*m!=NULL){
        BStree_node *check = matrix_inc_rec(*m, key, dt);
        if(key_comp(key, check->key)!= 0){
            printf("Location not accessible\n");
        }
        else{
            *check->data+=1;
        }
    }
}

/**
 *  * Print indices and values in the Matrix m (with bstree traversal()).
 *   *
 *    * @param m
 *     */
void matrix_list(Matrix m){
    BStree tree = m;
    bstree_traversal(tree);
}

/**
 *  * Free allocated space (with bstree free()).
 *   *
 *    * @param m
 *     */
void matrix_destruction(Matrix m){
    free(m);
}


