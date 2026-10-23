// Person 1: Search and tree initialization

template <typename Type, int Ord>
void InitTree(BTree<Type, Ord>& tree)
{
    // TODO (Person 1): Implement InitTree - set root to nullptr
    tree.root = nullptr;
}

template <typename Type, int Ord>
void DestroyTree(BTree<Type, Ord>& tree)
{
    // TODO (Person 1): Implement DestroyTree - recursively delete nodes using is_leaf + static_cast
    tree.root = nullptr;
}

template <typename Type, int Ord>
LeafNode<Type, Ord>* CreateLeaf()
{
    // TODO (Person 1): Implement CreateLeaf - allocate and initialize a LeafNode
    LeafNode<Type, Ord>* node = new LeafNode<Type, Ord>();
    node->is_leaf = true;
    node->num_keys = 0;
    return node;
}

template <typename Type, int Ord>
InternalNode<Type, Ord>* CreateInternal()
{
    // TODO (Person 1): Implement CreateInternal - allocate and initialize an InternalNode
    InternalNode<Type, Ord>* node = new InternalNode<Type, Ord>();
    node->is_leaf = false;
    node->num_keys = 0;
    for (int i = 0; i <= Ord; i++)
    {
        node->child[i] = nullptr;
    }
    return node;
}

template <typename Type, int Ord>
bool Search(BTree<Type, Ord>& tree, Type key)
{
    // TODO (Person 1): Implement Search - traverse the tree to find key
    return false;
}