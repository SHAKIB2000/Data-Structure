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
    printf("Enter the Item you want to delete: ");
    scanf("%d",&item1);
    for(i=0;i<n;i++)
    {
        if(array[i]==item1)
        {
            pos=i;
            break;
        }
    }
    item2=array[pos+1];
    for(i=pos;i<n-1;i++)
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
