#include <stdio.h>

void func2(int *ptr) // if you don't want to return any value from function then use void
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
        // printf("The value at %d is %d\n",i, *(ptr+i));   // will print same value
    }
    *(ptr + 2) = 6534; // we are incrementing pointer so we have to use bracket
    printf("The value of prt[2] is  %d\n", ptr[2]);
}

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value on index %d is %d\n", i, array[i]);
    }
    array[0] = 382; // very important point that if we cange any value here then it is reflected in main function
    return 0;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at index  %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int i, arr[] = {23, 13, 3, 4};
    printf("The value at index 0 is %d\n", arr[0]);
    func1(arr);
    printf("The updated value at index 0 is %d\n", arr[0]);
    func2(arr);

    int array[][2] = {{23, 13}, {2, 45},{73, 19}, {92, 85}};
    func3(array);

    return 0;
}
