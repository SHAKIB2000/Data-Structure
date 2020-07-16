#include<stdio.h>
int main()
{
    int array[100],n,pos,item1,item2,i;
    printf("How many elements you want to insert: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position you want to insert new elements: ");
    scanf("%d",&pos);
    printf("Enter new element 1: ");
    scanf("%d",&item1);
    printf("Enter new element 2: ");
    scanf("%d",&item2);
    for(i=n-1;i>=pos-1;i--)
    {
        array[i+2]=array[i];
    }
    array[pos-1]=item1;
    array[pos]=item2;
    n+=2;
    printf("After inserted new data:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
