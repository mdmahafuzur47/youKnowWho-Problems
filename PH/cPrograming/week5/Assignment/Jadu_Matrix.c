#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("NO\n");
        return 0;
    }
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    int flag = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j || (i + j) == (r - 1))
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }else{
                if(arr[i][j] != 0){
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}