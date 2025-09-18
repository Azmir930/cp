#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    struct Node *left, *right, *perent;
};
struct Node *root = NULL;
void insert(int value)
{
    struct Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->perent = NULL;
    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        struct Node *temp = root;
        while (temp != NULL)
        {
            int cur = temp->value;
            if (cur > value)
            {
                if (temp->left == NULL)
                {
                    newnode->perent = temp;
                    temp->left = newnode;
                    break;
                }
                temp = temp->left;
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    newnode->perent = temp;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}
void inorder(struct Node *cur = root)
{
    if (cur == NULL)
        return;
    inorder(cur->left);
    cout << cur->value << " ";
    inorder(cur->right);
}
void search(int value)
{
    struct Node *temp = root;
    while (temp != NULL)
    {
        if (temp->value == value)
        {

            cout << "Found" << endl;
        }
        else if (temp->value > value)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
}
int maximun()
{
    struct Node *temp = root;
    if (root == NULL)
    {
        cout << "BST is empty";
        return INT_MIN;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->value;
}
int minimum()
{
    struct Node *temp = root;
    if (root == NULL)
    {
        cout << "BST is empty";
        return INT_MAX;
    }
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->value;
}
Node *findNode(int value)
{
    struct Node *temp = root;
    while (temp != NULL)
    {
        if (temp->value == value)
        {
            return temp;
        }
        else if (temp->value > value)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return NULL;
}
void Delet0chi(Node *temp)
{
    struct Node *per = temp->perent;
    if (per == NULL)
    {
        root = NULL;
    }
    else
    {
        if (per->left == temp)
        {
            per->left = NULL;
        }
        else
        {
            per->right = NULL;
        }
        free(temp);
    }
}
void Delet1chi(Node *temp)
{
    Node *per = temp->perent;
    Node *child;
    if (temp->left != NULL)
    {
        child = temp->left;
    }
    else
    {
        child = temp->right;
    }
    if (per == NULL)
    {
        root = child;
        free(temp);
        root->perent = NULL;
    }
    if (per->left == temp)
    {
        per->left = child;
        child->perent = per;
    }
    else
    {
        per->right = child;
        child->perent = per;
    }
    free(temp);
}
Node *inordersucc(Node *temp)
{
    temp = temp->right;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
void Delet2chi(Node *temp)
{
    Node *suc = inordersucc(temp);
    temp->value = suc->value;
    if (suc->right == NULL)
    {
        Delet0chi(suc);
    }
    else
    {
        Delet1chi(suc);
    }
}

void Delet(int value)
{
    struct Node *temp = findNode(value);
    if (temp == NULL)
    {
        cout << "No value here" << endl;
    }
    else
    {
        if (temp->left != NULL && temp->right != NULL)
        {
            Delet2chi(temp);
        }
        else if (temp->left != NULL || temp->right != NULL)
        {
            Delet1chi(temp);
        }
        else
        {
            Delet0chi(temp);
        }
    }
}
int main()
{
    insert(44);
    insert(17);
    insert(88);
    insert(32);
    insert(65);
    insert(97);
    insert(28);
    insert(54);
    insert(82);
    insert(29);
    insert(76);
    insert(80);
    inorder();
    cout << endl;
    Delet(32);
    Delet(29);
    Delet(44);
    inorder();
    cout << "Max-" << maximun() << endl;
    cout << "Min-" << minimum() << endl;
}