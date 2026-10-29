// Person 4: Delete from internal and underflow helpers

template <typename Type, int Ord>
void DeleteFromInternal(BTree<Type, Ord>& tree, InternalNode<Type, Ord>* node, Type key)
{
    // TODO (Person 4): Implement DeleteFromInternal - delete key from internal node, replace with predecessor/successor
}

template <typename Type, int Ord>
void FixUnderflow(BTree<Type, Ord> &tree, Node<Type, Ord> *node, Type key)
{
    if (node == tree.root && node->num_keys == 0)
    {
        if (node->is_leaf)
        {
            DestroyNode(tree.root);
            tree.root = nullptr;
        }
        else
        {
            InternalNode<Type, Ord> *temp = static_cast<InternalNode<Type, Ord> *>(node);
            tree.root = temp->child[0];
            temp->child[0] = nullptr;
            DestroyNode(temp);
        }
        return;
    }
    
    const int MIN_KEYS = Ord / 2;
    if (node->is_leaf)
        return;

    int index = 0;
    while (index < node->num_keys && key > node->key[index])
        ++index;
    
    InternalNode<Type, Ord> *internal = static_cast<InternalNode<Type, Ord> *>(node);
    if (internal->child[index]->num_keys <= MIN_KEYS)
    {
        bool borrowLeft = index > 0 && internal->child[index - 1]->num_keys > MIN_KEYS;
        bool borrowRight = index < node->num_keys && internal->child[index + 1]->num_keys > MIN_KEYS;
        
        if (borrowLeft || borrowRight)
        {
            BorrowFromSibling(tree, node, key);
            return;
        }
        
        Type separator = (index < node->num_keys)
                             ? node->key[index]
                             : node->key[index - 1];
        Merge(tree, node, separator);

        if (node == tree.root && node->num_keys == 0)
            FixUnderflow(tree, node, key);
    }
}