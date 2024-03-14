#ifndef __$_TM_AVL_TREE__C
#define __$_TM_AVL_TREE__C

#include<stdlib.h>
#include<tm_avl_tree.h>

AVLTree * createAVLTree(bool *success,int(*predicate)(void *,void *))
{
AVLTree *avlTree;
if(success) *success=false;
avlTree=(AVLTree *)malloc(sizeof(AVLTree));
if(avlTree==NULL) return NULL;
avlTree->start=NULL;
avlTree->predicate=predicate;
avlTree->size=0;
if(success) *success=true;
return avlTree;
}

void destroyAVLTree(AVLTree *avlTree)
{
avlTree->start=NULL;
clearAVLTree(avlTree);
free(avlTree);
}

int getSizeOfAVLTree(AVLTree *avlTree)
{
if(avlTree==NULL || avlTree->start==NULL) return 0;
return avlTree->size;
}

void clearAVLTree(AVLTree *avlTree)
{

}

void insertIntoAVLTree(AVLTree *avlTree,void *ptr,bool *success)
{
AVLTreeNode *t,*j;
int weight;
if(success) *success=false;
if(avlTree==NULL) return;
if(avlTree->start==NULL)
{
t=(AVLTreeNode *)malloc(sizeof(AVLTreeNode));
if(t==NULL) return;
t->ptr=ptr;
t->left=NULL;
t->right=NULL;
avlTree->start=t;
if(success) *success=true;
return;
}
j=avlTree->start;
while(1)
{
weight=avlTree->predicate(ptr,j->ptr);
if(weight==0) return;
if(weight<0)
{
if(j->left==NULL)
{
t=(AVLTreeNode *)malloc(sizeof(AVLTreeNode));
if(t==NULL) return;
t->ptr=ptr;
t->left=NULL;
t->right=NULL;
j->left=t;
break;
}
else
{
j=j->left;
}
}
else
{
if(j->right==NULL)
{
t=(AVLTreeNode *)malloc(sizeof(AVLTreeNode));
if(t==NULL) return;
t->ptr=ptr;
t->left=NULL;
t->right=NULL;
j->right=t;
break;
}
else
{
j=j->right;
}
}
}
if(success) *success=true;
avlTree->size++;
}

void * getFromAVLTree(AVLTree *avlTree,void *ptr,bool *success)
{

}

#endif