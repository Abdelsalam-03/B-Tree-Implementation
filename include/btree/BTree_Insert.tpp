// Person 2: Insert operations

template <typename Type, int Ord>
void Insert(BTree<Type, Ord>& tree, Type key)
{
    // TODO (Person 2): Implement Insert - insert key into the B-tree
}

template <typename Type, int Ord>
void SplitLeaf(BTree<Type, Ord>& tree, LeafNode<Type, Ord>* leaf, LeafNode<Type, Ord>*& newLeaf)
{
    // TODO (Person 2): Implement SplitLeaf - split an overflowing leaf node
    newLeaf = nullptr;
}

template <typename Type, int Ord>
void SplitInternal(BTree<Type, Ord>& tree, InternalNode<Type, Ord>* node, InternalNode<Type, Ord>*& newNode)
{
    // TODO (Person 2): Implement SplitInternal - split an overflowing internal node
    newNode = nullptr;
}