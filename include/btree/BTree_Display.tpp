// Person 4: Display

template <typename Type, int Ord>
void DisplayAll(BTree<Type, Ord> &tree)
{
    if (tree.root == nullptr)
    {
        std::cout << "Empty tree." << std::endl;
        return;
    }

    traverse(tree.root);
    std::cout << std::endl;
}

template <typename Type, int Ord>
void traverse(Node<Type, Ord> *node)
{
    if (node->is_leaf)
    {
        for (size_t i = 0; i < node->num_keys; i++)
        {
            std::cout << node->key[i] << " ";
        }
    }
    else
    {
        InternalNode<Type, Ord> *internal = static_cast<InternalNode<Type, Ord> *>(node);

        for (size_t i = 0; i < internal->num_keys; i++)
        {
            traverse(internal->child[i]);
            std::cout << internal->key[i] << " ";
        }

        traverse(internal->child[internal->num_keys]);
    }
}