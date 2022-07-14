#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
    printf("Hello World!\nMy name is Eugene\n");

    return 0;
    */
    /*short x = 5, y = 570, res;
    float x1 = 4.658f, y1 = 56.4896f, res1, res2;
    bool isHasCar = true;
    char s = 'S';
    x = 45;
    x *= 5;
    x += 102;

    x1--;
    x1 = -74.589f;

    res = x + y;
    res1 = x1 * y1;
    res2 = res - res1;
    
    printf("result: %d + %d = %d\n\n", x, y, res);

    printf("result1: %f * %f = %f\n\n", x1, y1, res1);

    printf("result2: %d - %f = %.3f\n\n", res, res1, res2);

    printf("result3: %c\n", s);

    return 0;
    */
    /*
    float x, y, res;
    scanf_s("%f", &x);
    scanf_s("%f", &y);
    
    res = x * y;
    printf("result: %.3f\n", res);
     
    return 0;
    */
    int arr[] = { 56, 58, 89, 923}; 

    int array[3];
    array[0] = 45;
    array[1] = 59;
    array[2] = 964;

    printf("%d\n%d\n", arr[1], arr[3]);

    char word[] = {'S', 'o', 'm', 'e'};
    char words[] = "Hello World!\nHow are you?";

    words[2] = 'L';

    printf("%s\n", words);
    printf("%c\n%c\n", words[1],words[4]);

    int array2[4][3] = { //двумерный массив
        {4,45,9},
        {59,7,12},
        {47,9,4},
        {5,8,71} 
    };



    return 0;
}
