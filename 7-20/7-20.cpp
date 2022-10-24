
#include <iostream>
using namespace std;
#define MAX 1000

int main()
{
    int mult1(int a[], int b[], int sum[]);

    int len;
    int sum1[MAX] = { };
    int b[MAX] = { };
    sum1[0] = 1;
    for (int i = 1; i <= 100; i++)
    {
        b[0] = i % 10;
        b[1] = (i / 10) % 10;
        b[2] = (i / 100) % 10;
        len = mult1(sum1, b, sum1);

    }
    cout << "100!=";
    for (int i = len - 1; i >= 0; i--)
        cout << int(sum1[i]);
    cout << endl;
    return 0;
}
int mult1(int a[], int b[], int sum[])
{
    int i, j, len = 0;
    int c[MAX] = {};
    for (i = 0; i < MAX / 2; i++)
    {
        for (j = 0; j < MAX / 2; j++)
        {
            c[j + i] += b[i] * a[j];

        }
    }
        for (i = 0; i < MAX - 1; i++)
        {
            if (c[i] >= 10)
            {
                c[i + 1] += c[i] / 10;
                c[i] %= 10;

            }

        }
        for (i = MAX - 1; i >= 0; i--)
        {
            if (c[i] > 0)
            {
                len = i + 1;
                break;
            }
        }
        for (i = 0; i < MAX; i++)
        {
            sum[i] = c[i];
            
        }
        return len;
    
    
}
