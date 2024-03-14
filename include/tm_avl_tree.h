#ifndef __TM_AVL_TREE__H
#define __TM_AVL_TREE__H 123
#include<tm_common.h>
#include<tm_stack.h>
typedef struct __$_tm_avl_tree_node
{
void *ptr;
struct __$_tm_avl_tree_node *left;
struct __$_tm_avl_tree_node *right;
}AVLTreeNode;

typedef struct __$_tm_avl_tree
{
struct __$_tm_avl_tree_node *start;
int (*predicate)(void *,void *);
int size;
}AVLTree;

AVLTree * createAVLTree(bool *success,int(*predicate)(void *,void *));
void destroyAVLTree(AVLTree *avlTree);
int getSizeOfAVLTree(AVLTree *avlTree);
void clearAVLTree(AVLTree *avlTree);
void insertIntoAVLTree(AVLTree *avlTree,void *ptr,bool *success);
void * getFromAVLTree(AVLTree *avlTree,void *ptr,bool *success);

#endif