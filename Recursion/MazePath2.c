#include <stdio.h>
int maze2(int n, int m)
{ // cr=current row, cc= current column , er = ending row , ec =  ending column
    int rightWays = 0;
    int downWays = 0;

    if (n == 1 && m == 1)
        return 1; // aauta bato bhetyo destination pugni
    if (n == 1)
    {
        rightWays += maze2(n, m - 1); // cannot go further , only right way available
    }

    if (m == 1)
    {
        downWays += maze2(n - 1, m);
    }

    if (n > 1 && m > 1)
    {
        rightWays += maze2(n, m - 1);
        downWays += maze2(n - 1, m);
    }

    int totalWays = rightWays + downWays;
    return totalWays;
}

int main()
{
    int n, m;
    printf("Enter number of rows:");
    scanf("%d", &n);
    printf("Enter number of columns : ");
    scanf("%d", &m);

    int NoOfWays = maze2(n, m);
    printf("The number of ways to reach mazes destination is %d", NoOfWays);

    return 0;
}
