#include<iostream>
#include<stack>


using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
class BinTree
{
public:
    Node *root;
    Node* CreateTree();
    void preOrder(Node *r);//递归实现先序遍历
    void preOrder2(Node *r);

    void InOrder(Node *r);//递归实现中序遍历
    void InOrder2(Node *r);

    void PostOrder(Node *r);//递归实现后续遍历
    void PostOrder2(Node *r);
};

Node* BinTree::CreateTree()//创建一棵二叉树
{
    Node *p1=new Node(100);
    Node *p2=new Node(2);
    Node *p3=new Node(3);
    Node *p4=new Node(4);
    Node *p5=new Node(5);
    Node *p6=new Node(6);
    Node *p7=new Node(7);
    Node *p8=new Node(8);
    Node *p9=new Node(9);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p5->left=p6;
    p3->left=p7;
    p3->right=p8;
    p8->right=p9;
    root=p1;
    return p1;
}

//preorder using recursion
void BinTree::preOrder(Node *r)
{
    if(r==NULL)
    {
        return ;
    }
    else
    {
        cout<<r->data<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }
}

//inorder using recursion
void BinTree::InOrder(Node *r)
{
    if(r==NULL)
    {
        return ;
    }
    else
    {
        InOrder(r->left);
        cout<<r->data<<" ";
        InOrder(r->right);
    }
}

//postorder using recurion
void BinTree::PostOrder(Node *r)
{
    if(r==NULL)
    {
        return ;
    }
    else
    {
        PostOrder(r->left);
        PostOrder(r->right);
        cout<<r->data<<" ";
    }
}


//preorder using stack, nonrecursive method
void BinTree::preOrder2(Node *r)
{
      if(r==NULL)
	{return ;}
           //cout<<"The tree is empty!"<<endl;
      stack<Node*> s;
      while(r||!s.empty()){
              while(r){
                     cout<<r->data<<" ";
                     s.push(r);
                     r=r->left;
              } 
              r=s.top();
              s.pop();
              r=r->right; 
	}
}

void BinTree::InOrder2(Node *r)
{
//void midorder2(TreeNode* root){
        if(r)
            cout<<"empty!"<<endl;
        stack<Node*> s;
        while(r||!s.empty()){
                while(r){
                s.push(r);
                r=r->left; 
                }
                r=s.top();
                s.pop();
                cout<<r->data;
                r=r->right;
        }
}

void BinTree::PostOrder2(Node *r)
{
//void postorder2(TreeNode* root){
    if(r==NULL)
        cout<<"empty!"<<endl;
    else{
        stack<Node*> s;
        stack<Node*> v;
        while(r){
            s.push(r);
            v.push(0);
            r=r->left;
        }
        while(!s.empty()){
            r=s.top();
            while(r->right&&v.top()==0)            {
                v.pop();
                v.push(1);
                r=r->right;
                s.push(r);
                v.push(0);
                while(r->left){
                     s.push(r);
                     v.push(0);
                     r=r->left;
                }
           }
           r=s.top();
           cout<<r->data;
           s.pop();
           v.pop();
        }
    }
}



int main()
{
    BinTree t;
    t.CreateTree();//创建二叉树
    cout<<"先序遍历"<<endl;
    cout<<"recursive:"<<endl;
    t.preOrder(t.root);//先序遍历
    cout<<endl;

    cout<<"non-recursive:"<<endl;
    t.preOrder2(t.root);//先序遍历
    cout<<endl;

    cout<<"中序遍历:";
    t.InOrder(t.root);//中序遍历
    cout<<endl;

    cout<<"后序遍历:";
    t.PostOrder(t.root);//后序遍历
    cout<<endl;
    return 0;
}
