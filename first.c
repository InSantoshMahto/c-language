#include <stdio.h>

void student(int roll, char name[15])
{
    printf("%d\n%s", roll, name);
}
int main()
{
    int roll = 43;
    char name[45] = "santosh";
    // printf() displays the string inside quotation
    printf("Hello, World!");
    student(roll, name);
    return 0;
}

