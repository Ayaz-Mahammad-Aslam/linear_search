/*write a c program to implement linear search algorithm*/
#include<stdio.h>
int main()
{
    int a[20], N, key, flag = 0, i;

    printf("Enter array limit: ");
    scanf("%d",&N);
    
    printf("Enter %d elements: \n",N);
    for(i=0; i<N; i++)
    scanf("%d",&a[i]);

    printf("Enter the number to be searched: \n");
    scanf("%d", &key);
    for(i=0; i<N; i++)
    if(a[i] == key)
    {
        flag = 1;
        break;
    }
    if(flag)
    printf("Search successful");
    else 
    printf("Search unsuccessful");

    return 0;
}