#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct list
{
    int num;
    struct list *next;
}LinkList;

void InitList (LinkList **L) {
    (*L) = (LinkList *)malloc(sizeof(LinkList));
    (*L)->num = 1;
    (*L)->next = NULL;
}

void CreateList(LinkList **L,int n)
{
    int i;
    LinkList *p,*q;
    p = *L;
    for(i = 2;i<=n;i++)
    {
        q = (LinkList*)malloc(sizeof(LinkList));
        q->num = i;
        p->next = q;
        p = q;
    }
    p->next = *L;
}

void DeleteElem(LinkList **L,int m)
{
    int i;
    LinkList *p,*q,*s;
    p = *L;
    while(p->next!=p)
    {
        for(i=1;i<m;i++)
        {
            q = p;
            p = p->next;
        }
        printf("%d ",p->num);
        s = p;
        q->next = p->next;
        p = p->next;
        free(s);
    }
    printf("%d ",p->num);
}

void ShowList (LinkList **L,int n) {
    for(int i=0;i<n;i++){
        printf("%d ",(*L)->num);
        (*L) = (*L)->next;
    }
}