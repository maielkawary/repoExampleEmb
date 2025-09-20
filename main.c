#include <stdio.h>
#include <stdlib.h>
#include "toPrint.h"
#include "toScan.h"
#include "toSort.h"
int main()
{
    /* Version 2 for main*/
    int arrLength ;

    printf("Enter the number of array Elements : ");
    scanf("%d", &arrLength);

    int arr[arrLength];
    toScan(arr, arrLength);
    toPrint(arr, arrLength);
    toSort(arr, arrLength);

    printf("the max Number is %d\n", arr[0]);
    printf("the minimum Number is %d\n", arr[arrLength-1]);

    return 0;
}
