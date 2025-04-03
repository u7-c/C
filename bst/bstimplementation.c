#include<stdio.h>
#include<stdlib.h>
struct bstree{
    int data;
    struct bstree *left;
    struct bstree *right;
};
typedef struct bstree bstree;
bstree* insert(bstree*p,int e){
    bstree* node=(bstree*)malloc(sizeof(bstree));
    node->data=e;
    node->left=NULL;
    node->right=NULL;
    if(p==NULL){
        p=node;
        return p;
    }
    else if(e<p->data){
        p->left=insert(p->left,e);
    }
    else if(e>p->data){
        p->right=insert(p->right,e);
    }
    return p;

}
void inorder(bstree*p){
    if(p!=NULL){
        inorder(p->left);
        printf("\t%d",p->data);
        inorder(p->right);
        
    }
}
void preorder(bstree*p){
    if(p!=NULL){
        printf("\t%d",p->data);
        preorder(p->left);
        
        preorder(p->right);
        
    }
}
void postorder(bstree*p){
    if(p!=NULL){
        postorder(p->left);
        
        postorder(p->right);
        printf("\t%d",p->data);
        
    }
}
bstree*  deletion(bstree*p,int d){
    bstree* q;
    if(d<p->data){
        p->left=deletion(p->left,d);
    }
    if(d>p->data){
        p->right=deletion(p->right,d);
    }
    else if(d<p->data){
        q=p;
        if(q->left==NULL){
            p=q->right;
            free(q);
        }
        else {
            p=q->left;
            free(q);
        }
    }
}
int main(){
    bstree*p =NULL;
    p=insert(p,5);
    p=insert(p,4);
    p=insert(p,7);
    p=insert(p,8);
    p=insert(p,2);
    p=insert(p,9);
    p=insert(p,0);
    p=insert(p,23);
    inorder(p);
    printf("\n");
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    deletion(p,9);
    printf("\n");
    inorder(p);

}