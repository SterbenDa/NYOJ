#include <stdio.h>

int timeOfCal(int n)
{
int s;

if(n ==1)
s = 0;
else if (n == 2)
s = 1;
else if (n%2 == 0)
s = timeOfCal(n/2)+1;
else
s = timeOfCal(n-1)+1;

return s;
}

int main()
{
int m;
int n;

scanf("%d", &m);
while (m--)
{
scanf("%d", &n);

printf("%d\n", timeOfCal(n));

}

return 0;
}
