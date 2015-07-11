#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k,l,q[19],m=0,count=0,adjmat[19][19]={{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0},
                                {0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0},
                                {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0},
                                {0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1},
                                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0}};
    printf("Enter the no. of vertices:\n");
    scanf("%d",&n);
   
   /*
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
    //printf("Enter whether vertex %d connected to vertex %d\n",i,j);
    //printf("Enter 1 if connected and not same, 0 if not\n:");
    scanf("%d",&adjmat[i][j]);   
    }
    }
    */
    
    printf("Adjacent matrix is\n"); 
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",adjmat[i][j]);
    printf("\n");
    }
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(adjmat[i][j]==1)
    {
    printf("%d %d ",i,j);
    
                       
    q[m]=i;
    q[m+1]=j;
    m=m+2;
    count=count+2;
    
    for(k=0;k<n;k++)                   
    {
    adjmat[k][i]=0;
    adjmat[i][k]=0;
    adjmat[k][j]=0;
    adjmat[j][k]=0;
    }
    
    printf("\nNew adjacent matrix is\n"); 
    for(k=0;k<n;k++)
    {
    for(l=0;l<n;l++)
    printf("%d ",adjmat[k][l]);
    printf("\n");
    }
    }
    
    printf("\nThe covered set of vertices are: "); 
    for(m=0;m<count;m=m+2)
    printf("\n{%d %d}",q[m],q[m+1]);
       
getch();
return 0;
}

