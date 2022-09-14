#include <stdio.h>
int main()
{
int n;
scanf(“%d”,&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf(“%d”,&arr[i]);
}
int pos;
scanf(“%d”,&pos);
int ele;
scanf(“%d”,&ele);
if(pos > n)
printf(“Invalid Input”);
else
{
for (i = n – 1; i >= pos – 1; i–)
arr[i+1] = arr[i];

arr[pos-1] = ele;

printf(“Array after insertion is:\n”);

for (i = 0; i <= n; i++)
printf(“%d\n”, arr[i]);
}

return 0;
}
OUTPUT
5 (size of the array)

1 (array elements)

2

3

4

5

4 (Position)

10 (Element to be inserted)

Array after insertion is : 1 2 3 10 4 5


