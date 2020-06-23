#include "bstree.h"
#include <stdlib.h>

typedef BStree Matrix;
typedef char* Index;
typedef int Value;

/**
 *  * Matrix construction using bstree ini();
 *   *
 *    * @return
 *     */
Matrix matrix_construction(void);

/**
 *  *  If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
 *   *
 *    * @param m
 *     * @param index1
 *      * @param index2
 *       * @return
 *        */
unsigned char matrix_isin(Matrix m, Index index1, Index index2);

/**
 *  *If location (index1, index2) is defined in Matrix m, then return a pointer to the associated
 *      value. Otherwise, return NULL.
 *       *
 *        * @param m
 *         * @param index1
 *          * @param index2
 *           * @return
 *            */
Value *matrix_get(Matrix m, Index index1, Index index2);

/**
 *  *If location (index1, index2) is defined in Matrix m, then return a pointer to the associated
 *      value. Otherwise, return NULL.
 *       *
 *        * @param m
 *         * @param index1
 *          * @param index2
 *           * @return
 *            */
void matrix_rec_set(BStree_node *node, Key key, Data data);

/**
 *  * Recursive matrix set function
 *   *
 *    * @param node
 *     * @param key
 *      * @param data
 *       */
void matrix_set(Matrix m, Index index1, Index index2, Value value);

/**
 *  *Assign value to Matrix m at location (index1, index2). If that location already has value,
 *  then overwrite.
 *   *
 *    * @param m
 *     * @param index1
 *      * @param index2
 *       * @param value
 *        */
BStree_node *matrix_inc_rec(BStree_node *current, Key key, Data data);

/**
 *  *Recursive matrix inc
 *   *
 *    * @param current
 *     * @param key
 *      * @param data
 *       * @return
 *        */
void matrix_inc(Matrix m, Index index1, Index index2, Value value);

/**
 *  *
 *   * @param tree
 *    */
void matrixTrav(BStree_node tree);

/**
 *  *If location (index1, index2) is defined in Matrix m, then increase the associated value by
 *      value. Otherwise, report error.
 *       *
 *        * @param m
 *         * @param index1
 *          * @param index2
 *           * @param value
 *            */
void matrix_list(Matrix m);

/**
 *  * Print indices and values in the Matrix m (with bstree traversal()).
 *   *
 *    * @param m
 *     */
void matrix_destruction(Matrix m);
