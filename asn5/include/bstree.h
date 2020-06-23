#include "datatype.h"
#include <stdlib.h>

typedef struct BStree_node {
    Key key;
    Data data;
    struct BStree_node *left, *right;
}
BStree_node;

typedef BStree_node** BStree;

/**
 *  *Allocate memory of type BStree node*, set the value to NULL, and return a pointer to the
 *      allocated memory.
 *       *
 *        * @return
 *         */
BStree bstree_ini(void);

/**
 *  *
 *   *
 *    * @param key
 *     * @param data
 *      * @return
 *       */
BStree_node *new_node(Key key, Data data);

/**
 *  * recursive insert helper
 *   *
 *    * @param node
 *     * @param targNode
 *      */
void recInsert(BStree_node *node, BStree_node *targNode);

/**
 *  *Insert data with key into bst. If key is in bst, then do nothing.
 *   *
 *    * @param bst
 *     * @param key
 *      * @param data
 *       */
void bstree_insert(BStree bst, Key key, Data data);

/**
 *  * Recursive search helper
 *   *
 *    * @param currentLoc
 *     * @param key
 *      * @return
 *       */
Data recSearch(BStree_node *currentLoc, Key key);

/**
 *  * If key is in bst, return key’s associated data. If key is not in bst, return NULL.
 *   *
 *    * @param bst
 *     * @param key
 *      * @return
 *       */
Data bstree_search(BStree bst, Key key);

/**
 *  * In order traversal of bst and print each node’s key and data.
 *   *
 *    *
 *     * @param bst
 *      */
void bstree_traversal(BStree bst);

/**
 *  *Free all the dynamically allocated memory of bst.
 *   *
 *    * @param bst
 *     */
void bstree_free(BStree bst);

