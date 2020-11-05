#include <stdio.h>
#include "LinkList.h"

int main() {
    int m,n;
    LinkList *L;
    InitList(&L);
    printf("How many people?");
    scanf("%d",&n);
    printf("Input the password:");
    scanf("%d",&m);
    CreateList(&L,n);
    printf("before:\n");
    ShowList(&L,n);
    printf("\nafter:\n");
    DeleteElem(&L,m);
    return 0;
}