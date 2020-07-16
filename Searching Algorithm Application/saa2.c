#include<stdio.h>
void main()
{
    int temp,i,j,n=7,a[]={2,6,8,1,5,4,6},ub=6,lb=0,search=1,mid;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    while(lb<=ub)
    {
        mid=(ub+lb)/2;
        if(a[mid]==search)
        {
            for(i=mid;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            n--;
            printf("'%d' is found and deleted!\nNow the array is:\n",search);
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        }
        else if(a[mid]>search)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
    if(lb>ub)
    {
        printf("%d is not found!",search);
    }
}
