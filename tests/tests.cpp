#include <cassert>
#include "btree/BTree.h"

void RunTests()
{
    // Test InitTree
    BTree<int, 3> tree;
    InitTree(tree);
    assert(tree.root == nullptr);

    // Test CreateLeaf
    LeafNode<int, 3>* leaf = CreateLeaf<int, 3>();
    assert(leaf != nullptr);
    assert(leaf->is_leaf == true);
    assert(leaf->num_keys == 0);
    delete leaf;

    // Test CreateInternal
    InternalNode<int, 3>* internal = CreateInternal<int, 3>();
    assert(internal != nullptr);
    assert(internal->is_leaf == false);
    assert(internal->num_keys == 0);
    delete internal;

    // Test Search on empty tree
    assert(Search(tree, 10) == false);

    // Test DestroyTree (should not crash)
    DestroyTree(tree);
}