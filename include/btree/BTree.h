#pragma once

#include "Node.h"
#include "InternalNode.h"
#include "LeafNode.h"

template <typename Type, int Ord>
struct BTree
{
    Node<Type, Ord>* root;
};

// Person 1
template <typename Type, int Ord> void InitTree(BTree<Type, Ord>& tree);
template <typename Type, int Ord> void DestroyTree(BTree<Type, Ord>& tree);
template <typename Type, int Ord> LeafNode<Type, Ord>* CreateLeaf();
template <typename Type, int Ord> InternalNode<Type, Ord>* CreateInternal();
template <typename Type, int Ord> bool Search(BTree<Type, Ord>& tree, Type key);

// Person 2
template <typename Type, int Ord> void Insert(BTree<Type, Ord>& tree, Type key);
template <typename Type, int Ord> void SplitLeaf(BTree<Type, Ord>& tree, LeafNode<Type, Ord>* leaf, LeafNode<Type, Ord>*& newLeaf);
template <typename Type, int Ord> void SplitInternal(BTree<Type, Ord>& tree, InternalNode<Type, Ord>* node, InternalNode<Type, Ord>*& newNode);

// Person 3
template <typename Type, int Ord> void Delete(BTree<Type, Ord>& tree, Type key);
template <typename Type, int Ord> void DeleteFromLeaf(BTree<Type, Ord>& tree, LeafNode<Type, Ord>* leaf, Type key);
template <typename Type, int Ord> bool BorrowFromSibling(BTree<Type, Ord>& tree, Node<Type, Ord>* node, Type key);
template <typename Type, int Ord> void Merge(BTree<Type, Ord>& tree, Node<Type, Ord>* node, Type key);

// Person 4
template <typename Type, int Ord> void DeleteFromInternal(BTree<Type, Ord>& tree, InternalNode<Type, Ord>* node, Type key);
template <typename Type, int Ord> void FixUnderflow(BTree<Type, Ord>& tree, Node<Type, Ord>* node, Type key);
template <typename Type, int Ord> void DisplayAll(BTree<Type, Ord>& tree);

#include "BTree_Search.tpp"
#include "BTree_Insert.tpp"
#include "BTree_DeleteLeaf.tpp"
#include "BTree_DeleteInternal.tpp"
#include "BTree_Display.tpp"