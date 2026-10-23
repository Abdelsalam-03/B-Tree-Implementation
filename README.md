# BTree

A C++17 implementation of a B-Tree data structure.

## Project Description

This project implements a B-Tree with operations for insertion, deletion, searching, and display. The implementation follows a strict team-based design where each person owns separate files to avoid merge conflicts.

## Team Responsibilities

| Person | Responsibilities |
|--------|-----------------|
| Person 1 | Node/LeafNode/InternalNode/BTree structs, InitTree, DestroyTree, CreateLeaf, CreateInternal, Search |
| Person 2 | Insert, SplitLeaf, SplitInternal, new root creation |
| Person 3 | Delete, DeleteFromLeaf, BorrowFromSibling, Merge |
| Person 4 | DeleteFromInternal, FixUnderflow, root shrinking, DisplayAll, main menu, tests |

## Build Instructions

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

## Run Instructions

```bash
./BTree
```

## Branch Rules

Each person works on their own branch. Do not edit files owned by someone else. Open a Pull Request to merge changes.

### Branches

- `feature/person1-search` - Person 1's search operations
- `feature/person2-insert` - Person 2's insert operations
- `feature/person3-delete-leaf` - Person 3's delete leaf operations
- `feature/person4-delete-internal-display` - Person 4's delete internal/display operations