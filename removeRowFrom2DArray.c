#include <stdio.h>
int main()
{
    int row,column;
    printf("Enter rows :");
    scanf("%d",&row);
    printf("Enter columns :");
    scanf("%d",&column);

    int array[row][column];
    int i,j,num;
    printf("Enter elements into 2-D array: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
        scanf("%d" , &array[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
        printf("%d " , array[i][j]);
        }
        printf("\n");
    }

    int x;
    printf("Enter the row to be deleted :");
    scanf("%d",&x);
    
    for(i=0;i<row;i++){
        for(int k=i;k<row;k++){
            
        }
        for(j=0;j<column;j++){

        }
    }
}