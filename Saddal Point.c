// Sandel Problem
#include <stdio.h>

void main()
{
    int mat[3][3], i, k, j, min, max, flag = 0, col = 0;

    //collecting elements for materix
    printf("Enter The Elements : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    //Printing elements of materix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

    //Finding Saddel Point
    for (i = 0; i < 3; i++)
    {
        min = mat[i][0];
        for (j = 0; j < 3; j++)
        {
            //Finding Minimum Number from Row
            if (min >= mat[i][j])
            {
                min = mat[i][j];
                col = j;
                max = min;
                // finding maximum number from column of minimum Number Point
                for (k = 0; k < 3; k++)
                {
                    if (max < mat[k][col])
                    {
                        max = mat[k][col];
                    }
                }
            }
        }
        // If Minimum Number From Row and
        // Maximum Number from Column is Same Than that is a saddel Point
        if (max == min)
        {
            flag = 1;
            break;
        }
    }
    //Printing Saddel Point
    if (flag == 1)
        printf("\t- Saddel Point = %d", max);
    else
        printf("\t- No Saddel point.");
}
