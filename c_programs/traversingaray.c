#include <stdio.h>

const int MAX = 3;  // Global declaration
int main()
{
	printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
	int var[] = {100, 200, 300};
    int i, *ptr;

    /* 
        storing address of the last element 
        of the array in pointer variable
    */
    ptr = &var[MAX-1];

	for(i = MAX; i > 0; i--)
    {
    	printf("\n\n\nAddress of var[%d] = %x ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

		// move to the previous location
        ptr--;
	}
	printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
