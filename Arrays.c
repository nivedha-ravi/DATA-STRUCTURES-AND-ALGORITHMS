//APPEND TO ARRAY:

#include<stdio.h>
#define MAX 1000
int list[MAX], size = 0;
void append(int score)
{
    list[size++]=score;
}
int main()
{
    int N, counter;
    int totalScore=0, score, index;
    scanf("%d", &N);
    for(counter=1; counter<=N; counter++)
    {
        scanf("%d", &score);
        append(score);
    }
    for(index=0; index < size; index++)
    {
        totalScore += list[index];
    }
    printf("%d", totalScore);
}

//PREPEND TO ARRAY:

#include<stdio.h>
#define MAX 1000
int list[MAX], size = 0;

void prepend(int score)
{
   for(int index=size-1;index>=0;index--)
   {
       list[index+1]=list[index];
   }
   list[0]=score;
   size++;
}
int main()
{
    int N, counter, M;
    int totalScore=0, score, index;
    scanf("%d", &N);
    for(counter=1; counter<=N; counter++)
    {
        scanf("%d", &score);
        prepend(score);
    }
    scanf("%d", &M);
    for(index=0; index < M; index++)
    {
        totalScore += list[index];
    }
    printf("%d", totalScore);
}

//REMOVEAT  INDEX:

#include<stdio.h>
#define MAX 1000
int list[MAX], size = 0;
void removeAt(int index)
{
    for(int i=index;i<size;i++)
    {
        list[i]=list[i+1];
    }
}
int main()
{
    int N, counter, M, indexToRemove;
    int totalScore=0, score, index;
    scanf("%d", &N);
    for(index=0; index < N; index++)
    {
        scanf("%d", &list[index]);
        size++;
    }
    scanf("%d", &M);
    for(counter=1; counter<=M; counter++)
    {
        scanf("%d", &indexToRemove);
        removeAt(indexToRemove);
    }
    for(index=0; index < size; index++)
    {
        totalScore += list[index];
    }
    printf("%d", totalScore);
}
