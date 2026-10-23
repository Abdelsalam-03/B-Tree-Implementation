# Team Split

## Person 1
- 4 structs (Node.h, InternalNode.h, LeafNode.h, BTree.h)
- InitTree, DestroyTree, CreateLeaf, CreateInternal, Search
- Order: pushes structs first

## Person 2
- Insert, SplitLeaf, SplitInternal, new root creation
- Order: finishes after P1

## Person 3
- Delete, DeleteFromLeaf, BorrowFromSibling, Merge
- Order: starts after P1+P2 finish Search/Insert

## Person 4
- DeleteFromInternal, FixUnderflow, root shrinking, DisplayAll, main menu, tests
- Order: starts with P3, finishes project

## Merge Order
1. P1 pushes structs first
2. P1 + P2 finish Search/Insert
3. P3 + P4 start Delete
4. P4 finishes main and tests
5. Everyone merges