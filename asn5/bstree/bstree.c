#include "../include/bstree.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  *Allocate memory of type BStree node*, set the value to NULL, and return a pointer to the
 *      allocated memory.
 *       *
 *        * @return
 *         */
BStree bstree_ini(void){
    BStree bst;
    bst = (BStree) malloc(sizeof(BStree_node*));
    *bst= NULL;
    return bst;
}

/**
 *  *
 *   *
 *    * @param key
 *     * @param data
 *      * @return
 *       */
BStree_node *new_node(Key key, Data data){
    BStree_node* node = ((BStree_node*) malloc(sizeof(BStree_node)));
    if(node!=NULL){
        node->key = key;
        node->data= data;
        node->left= NULL;
        node->right = NULL;
    }
    return node;
}
/**
 *  * recursive insert helper
 *   *
 *    * @param node
 *     * @param targNode
 *      */
void recInsert(BStree_node *node, BStree_node *targNode){
    int compVal = key_comp(node->key, targNode->key);
    if (compVal>0){
        if (node->left==NULL){
            node->left = targNode;
        }
        else{
            recInsert(node->left, targNode);
        }
    }
    else if(compVal<0){
        if(node->right==NULL){
            node->right=targNode;
        }
        else{
            recInsert(node->right, targNode);
        }
    }

}


/**
 *  *Insert data with key into bst. If key is in bst, then do nothing.
 *   *
 *    * @param bst
 *     * @param key
 *      * @param data
 *       */
void bstree_insert(BStree bst, Key key, Data data){
    BStree_node *targNode = new_node(key, data);
    if(*bst != NULL){
        recInsert(*bst, targNode);
    }
    else{
        *bst=targNode;
        BStree_node *node = targNode;
        node->right = NULL;
        node->left=NULL;
    }
}


/**
 *  * Recursive search helper
 *   *
 *    * @param currentLoc
 *     * @param key
 *      * @return
 *       */
Data recSearch(BStree_node *currentLoc, Key key){
    if (currentLoc== NULL){
        return NULL;
    }
    else{
        int num = key_comp(key,currentLoc->key);
        if (num>0){
            return recSearch(currentLoc->right, key);
        }
        else if (num<0){
            return recSearch(currentLoc->left, key);
        }
        else{
            return currentLoc->data;
        }
    }
}
/**
 *  * If key is in bst, return key’s associated data. If key is not in bst, return NULL.
 *   *
 *    * @param bst
 *     * @param key
 *      * @return
 *       */
Data bstree_search(BStree bst, Key key){
    return recSearch(*bst, key);

}

/**
 *  * In order traversal of bst and print each node’s key and data.
 *   *
 *    *
 *     * @param bst
 *      */
void bstree_traversal(BStree bst){
    BStree_node *loc = *bst;
    if(loc!=NULL){
        bstree_traversal(&loc->left);
        key_print(loc->key);
        data_print(loc->data);
        bstree_traversal(&loc->right);
    }
}


/**
 *  *Free all the dynamically allocated memory of bst.
 *   * 
 *    * @param bst
 *     */
void bstree_free(BStree bst){
    free(bst);
}

