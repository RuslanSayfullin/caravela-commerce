#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int array[10], element, c, n, pos;
    /* 
        initialization as garbage value is 
        stored by default in c variables
    */
    int found = 0; 
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);

    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nThe input array is: ");
    for(c = 0; c < n; c++)
    printf("%d", array[c]);

    printf("\n\nEnter the element to be deleted: ");
    scanf("%d", &element);

    // check the element to be deleted is in array or not
    for(c = 0; c < n; c++)
    {
        if(array[c] == element)
        {
            found = 1;
            pos = c;
            break;  // terminate the loop
        }
    }
    if(found == 1) // the element to be deleted exists in the array
    {
        for(c = pos; c < n-1; c++)
            array[c] = array[c+1];
    }
    else
        printf("\n\nElement %d is not found in the array\n\n", element);

    printf("\n\nResultant array is: ");
    /* 
        the array size gets reduced by 1 
        after deletion of the element
    */
    for(c = 0; c < n-1; c++) 
        printf("%d  ",array[c]);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
