#include <stdio.h>
#include <stdlib.h>

// 二叉排序树结点定义
typedef struct BSTNode {
    int data;
    struct BSTNode *lchild, *rchild;
} BSTNode, *BSTree;

// 插入结点（建立二叉排序树）
void InsertBST(BSTree *root, int key) {
    if (*root == NULL) {
        *root = (BSTree)malloc(sizeof(BSTNode));
        (*root)->data = key;
        (*root)->lchild = (*root)->rchild = NULL;
    } else if (key < (*root)->data) {
        InsertBST(&((*root)->lchild), key);
    } else if (key > (*root)->data) {
        InsertBST(&((*root)->rchild), key);
    }
    // 若相等，则不插入（可根据需求处理）
}

// 查找关键字key，返回结点指针，若不存在返回NULL
BSTree SearchBST(BSTree root, int key) {
    if (root == NULL) return NULL;
    if (root->data == key) return root;
    else if (key < root->data) return SearchBST(root->lchild, key);
    else return SearchBST(root->rchild, key);
}

// 中序遍历（用于验证有序性）
void InOrder(BSTree root) {
    if (root) {
        InOrder(root->lchild);
        printf("%d ", root->data);
        InOrder(root->rchild);
    }
}

// 测试
int main() {
    BSTree root = NULL;
    int keys[] = {10, 18, 3, 8, 12, 2, 7};
    int n = sizeof(keys) / sizeof(keys[0]);
    for (int i = 0; i < n; i++) {
        InsertBST(&root, keys[i]);
    }
    printf("中序遍历序列：");
    InOrder(root);  // 应输出升序：2 3 7 8 10 12 18
    printf("\n");

    int key = 8;
    BSTree node = SearchBST(root, key);
    if (node) printf("找到关键字 %d\n", key);
    else printf("未找到 %d\n", key);
    return 0;
}
