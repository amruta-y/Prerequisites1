#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n,FILE *fp1)
{
    int i;
    printf("Random no's are:\n");
    for(i=0;i<n;i++)
    {
        fprintf(fp1,"%d\t",a[i]);
        printf("%d\t",a[i]);
    }
}

int main()
{
    int u,l,a[100],i,n;
    FILE *fp1;
    fp1=fopen("input.txt","w");
    printf("Enter the lower and upper limit:\n");
    scanf("%d%d",&l,&u);
    printf("Enter the count of random no's u want to generate:\n");
    scanf("%d",&n);
    srand((time(0)));
    for(i=0;i<n;i++)
    {
        a[i]=((rand()%(u-l)+1)+l);
    }
    display(a,n,fp1);
}
