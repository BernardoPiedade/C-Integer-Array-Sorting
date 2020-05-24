#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5];
    arr[0] = 4;
    arr[1] = 6;
    arr[2] = 1;
    arr[3] = 7;
    arr[5] = 5;

    printf("Normal: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%i\n", arr[i]);
    }

    for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j] < arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("\n\nAscending Sort: \n");

    for(int i = 0; i < 5; i++)
    {
        printf("%i\n", arr[i]);
    }

    for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j] > arr[i])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("\n\nDescending Sort: \n");

    for(int i = 0; i < 5; i++)
    {
        printf("%i\n", arr[i]);
    }

    return 0;
}
