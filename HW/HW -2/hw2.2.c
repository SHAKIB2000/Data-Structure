#include<stdio.h>
int main()
{
    int array[100],n,pos,item[3],i,j;
    printf("How many elements you want to insert: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(j=0;j<3;j++)
    {
        printf("Enter the position %d you want to delete: ",j+1);
        scanf("%d",&pos);
        pos=pos-j;
        item[j]=array[pos-1];
        for(i=pos-1;i<=n-1;i++)
        {
            array[i]=array[i+1];
        }
        n--;
    }
    printf("Item %d, %d, %d deleted!\n",item[0],item[1],item[2]);
    printf("After deleted there are %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
