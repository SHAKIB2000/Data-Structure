#include<stdio.h>
void main()
{
    int temp,i,j,n=7,benches[30],ub=6,lb=0,search,mid,pos;
        //Takes input of students id
    printf("Enter %d students ID : ",n);
    for(i=0;i<7;i++)
        scanf("%d",&benches[i]);
        //sort the IDs using bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(benches[j]>benches[j+1])
            {
                temp=benches[j];
                benches[j]=benches[j+1];
                benches[j+1]=temp;
            }
        }
    }
    printf("Enter the ID of last entered student : ");
    scanf("%d",&search);
    //Binary serach for last student
    while(lb<=ub)
    {
        mid=(ub+lb)/2;
        if(benches[mid]==search)
        {   //Array deletion
            for(i=mid;i<n-1;i++)
            {
                benches[i]=benches[i+1];
            }
            n--;
            printf("ID-'%d' is already in there.So the student is disqualified!\n\n",search);
            break;
        }
        else if(benches[mid]>search)
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
        if(search>benches[mid])
        {
            mid++;
        }
        //Array insertion
        for(i=n-1;i>=mid;i--)
            {
                benches[i+1]=benches[i];
            }
            n++;
            benches[mid]=search;
            printf("\nStudent ID-'%d' seated at Bench no %d!\n\n",search,mid);
    }
    printf("Finally the %d students are seated like this\n\n",n);
    printf("BENCH NO\tID\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\n\n",i,benches[i]);
    }
}
