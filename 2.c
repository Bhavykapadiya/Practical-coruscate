#include<stdio.h>
#define CAPACITY 6
int top=-1;
int stack[CAPACITY];
void push(int);
int peep();
int isfull();
int isEmpty();

void push(int ele)
{
    if(isfull()){
        printf("Stack is full");
    }
    else{
        top++;
        stack[top] = ele;
        printf("%d inserted", ele);
    }
}
int isfull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
        return 0;
}

int peep()
{
    int ele;
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        ele = stack[top];
        top--;
    }
    return stak[top];
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void main(){
    int i,n,player1=0, player2=0,ch;

    printf("Coins value is => ");
    scanf("%d" , &n);
    while(1){
        printf("1 : Enter the element");
        printf("2 : pick the number");
    }

    switch(ch)
    {

    }
}

//Not complete
