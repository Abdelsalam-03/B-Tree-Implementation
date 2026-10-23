#pragma once

#include "Node.h"

template <typename Type, int Ord>
struct LeafNode : public Node<Type, Ord>
{
};