 #include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
output:
enter the number of elments:5
  enter the elments:
    2
    1
    5
    4
    3
  the sorted elments are:1 2 3 4 5
    
  
  
