/* Name : karunesh jadhav
   UIN : 251C019
   Division : B
   Roll no. : 16
   Field : civil */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], m, n;
    int i,j,rows,cols;

    printf("enter number of rows and columns: ");
    scanf("%d %d",&rows,&cols);

    printf("enter element of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter element of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    return 0;
}
