// Person 3: Delete from leaf helpers

template <typename Type, int Ord>
void Delete(BTree<Type, Ord>& tree, Type key)
{
    // TODO (Person 3): Implement Delete - delete key from the B-tree
}

template <typename Type, int Ord>
void DeleteFromLeaf(BTree<Type, Ord>& tree, LeafNode<Type, Ord>* leaf, Type key)
{
    // TODO (Person 3): Implement DeleteFromLeaf - remove key from a leaf node
}

template <typename Type, int Ord>
bool BorrowFromSibling(BTree<Type, Ord>& tree, Node<Type, Ord>* node, Type key)
{
    // TODO (Person 3): Implement BorrowFromSibling - borrow a key from a sibling to fix underflow
    return false;
}

template <typename Type, int Ord>
void Merge(BTree<Type, Ord>& tree, Node<Type, Ord>* node, Type key)
{
    // TODO (Person 3): Implement Merge - merge a node with a sibling
}