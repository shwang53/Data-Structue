/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>


#include <string>
#include <utility>

#include "binarytree.h"
#include "abstractsyntaxtree.h"


/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    cout << endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
    template <typename T>
void BinaryTree<T>::mirror()
{
    //your code here
    mirrorRecur(root);
}
template <typename T>
void BinaryTree<T>::mirrorRecur(Node *& temp){
    if(temp == NULL){
      return;
    }

      Node * store;
      store = temp ->left;
      temp->left = temp->right;
      temp->right = store;
      mirrorRecur(temp->left);
      mirrorRecur(temp->right);

}


/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    // your code here
    InorderTraversal<int> temp = root;
    int zero = 0;
    bool check = true;
    TreeTraversal<int>::Iterator it;
    for (it = temp.begin(); it != temp.end(); ++it) {
    if(zero > (*it)->elem){return false;}
      zero = (*it)->elem;
}
return true+;


//     break;
//   if(it2Node->elem < itNode->elem)
//     {return false;}
// }
// return true;
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    // your code here
    return isOrderedRecurHelper(root, INT_MAX, INT_MIN);
}

template <typename T>
bool BinaryTree<T>::isOrderedRecurHelper (Node* node, T max, T min) const{
    if(node == NULL) {return true;}
    if(node->elem < min) {return false;}
    if(node->elem > max) {return false;}

    return isOrderedRecurHelper(node->left, node->elem, min) && isOrderedRecurHelper(node->right, max, node->elem);


}


/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
//  */
template <typename T>
void BinaryTree<T>::getPaths(vector<vector<T>> &paths) const
{
    vector<T> history{};
    getPathsHelp(root, paths, history);
}

template <typename T>
void BinaryTree<T>::getPathsHelp(const Node* tempRoot, vector<vector<T>> &temp, vector<T> history)const {

  if(tempRoot != NULL){
    if (!tempRoot->left && !tempRoot->right) {

      temp.push_back(history);
      temp[temp.size()-1].push_back(tempRoot->elem);
      return;

    }
    history.push_back(tempRoot->elem);
    getPathsHelp(tempRoot->left, temp, history);
    getPathsHelp(tempRoot->right, temp, history);
  }else{
    return;
  }

}

// template <typename T>
// void BinaryTree<T>::printPaths(Node* root,vector<vector<T>> &paths, vector<int> row) const {
//     //if(root== NULL) return;
//     if(!root->left && !root->right) {
//         row.push_back(root->elem);
//         paths.push_back(row);
//         return;
//     }
//     row.push_back(root->elem);
//     if(root->left) printPaths(root->left, paths, row);
//     if(root->right) printPaths(root->right, paths, row);
//
//     row.pop_back();
//
// }

/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
 return sumDistances(root,0);
}

template <typename T>
int BinaryTree<T>::sumDistances(Node * root, int height) const
{
  if(root == NULL) {return 0;}
  return height+sumDistances(root->left, height+1)+sumDistances(root->right,height+1);

}
