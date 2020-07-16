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
    printf("Enter the position you want to delete: ");
    scanf("%d",&pos);
    item1=array[pos-1];
    item2=array[pos];
    for(i=pos-1;i<n-1;i++)
    {
        array[i]=array[i+2];
    }
    n-=2;
    printf("Item %d, %d deleted!\n",item1,item2);
    printf("After deleted there are %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
