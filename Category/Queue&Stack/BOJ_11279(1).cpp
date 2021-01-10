#include <stdio.h>

#define MAX_SIZE 100001

int heap[MAX_SIZE];
int heap_size;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void push(int x){
    heap[++heap_size]=x;
    int child=heap_size;
    int parent = child/2;
    while(child>1 && heap[parent]<heap[child]){
        swap(&heap[child],&heap[parent]);
        child=parent;
        parent=child/2;
    }    
}

int pop(){
    if(heap_size==0)
        return 0;
    int max=heap[1];
    swap(&heap[1],&heap[heap_size]);
    int parent,child;
    heap_size--;
    parent=1;
    child=parent*2;
    if(heap[child]<heap[child+1]&&child+1<=heap_size){
        child=child+1;
    }
    while(child<=heap_size&&heap[parent]<heap[child]){
        if(heap[child]<heap[child+1]){
            swap(&heap[parent],&heap[child]);
            parent=child;
            child=parent*2;
            if(heap[child]<heap[child+1]&&child+1<=heap_size){
                child=child+1;
            }
        }    
    }
    return max;
}

int main(){
    int n,input;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&input);
        if(input==0){
            printf("%d\n",pop());
        }
        else{
            push(input);
        }
    }
}
/*
작동은 하는데 시간초과.
*/