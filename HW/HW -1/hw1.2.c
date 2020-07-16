#include<stdio.h>
int main()
{
    int array[100],n,pos,item,i,j;
    printf("How many elements you want to insert: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(j=1;j<=3;j++)
    {
        printf("Now the array elements are :\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\nEnter the new item %d position you want to insert: ",j);
        scanf("%d",&pos);
        printf("Enter item %d: ",j);
        scanf("%d",&item);
        for(i=n-1;i>=pos-1;i--)
        {
            array[i+1]=array[i];
        }
        array[pos-1]=item;
        n++;
    }
    printf("After inserted 3 new data array elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
