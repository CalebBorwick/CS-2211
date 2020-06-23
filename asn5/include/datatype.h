#include <stdio.h>


typedef int* Data;
typedef struct {char *skey1; char *skey2;} Key_struct;
typedef Key_struct* Key;

/**
 *  * Duplicate string pointed to by str with dynamic memory allocation.
 *   *
 *    * @param str
 *     * @return
 *      */
char * string_dup(char *str);

/**
 *  *Generate a key with dynamic memory allocation.
 *   *
 *    * @param skey1
 *     * @param skey2
 *      * @return
 *       */
Key key_gen(char *skey1, char *skey2);

/**
 *  *
 *   * Use strcmp( ) to do comparison. If key1->skey1 and key2->skey1 are different, then
 *       they determine the comparison result. If key1->skey1 and key2->skey1 are the same,
 *           then key1->skey2 and key2->skey2 determine the comparison result.
 *            * @param key1
 *             * @param key2
 *              * @return
 *               */
int key_comp(Key key1, Key key2);

/**
 *  * Print a key.
 *   *
 *    * @param key
 *     */
void key_print(Key key);

/**
 *  *Free memory allocated for key.
 *   *
 *    * @param key
 *     */
void key_free(Key key);

/**
 *  * Generate a data with dynamic memory allocation.
 *   *
 *    * @param idata
 *     * @return
 *      */
Data data_gen(int idata);

/**
 *  *Assign data with idata.
 *   *
 *    * @param data
 *     * @param idata
 *      */
void data_set(Data data, int idata);

/**
 *  *Print a data.
 *   *
 *    * @param data
 *     */
void data_print(Data data);

/**
 *  * Free memory allocated for data.
 *   *
 *    * @param data
 *     */
void data_free(Data data);

