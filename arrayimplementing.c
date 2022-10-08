#include <stdio.h>
#include <stdlib.h>
struct myarr
{
    int t_arr;
    int u_arr;
    int *ptr;
};
void creatarr(struct myarr *a, int tarr, int uarr)
{
    a->t_arr = tarr;
    a->u_arr = uarr;
    a->ptr = (int *)malloc(tarr * sizeof(int));
}
void read(struct myarr *a)
{
    int n;
    for (int i = 0; i < a->u_arr; i++)
    {

        printf("enter the number :");
        scanf("%d", &n);
        (a->ptr)[i] = n;        
    }
}
void write(struct myarr *a)
{
    for (int i = 0; i < a->u_arr; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
int main()
{
    struct myarr marks;
    creatarr(&marks, 100, 2);
    read(&marks);
    write(&marks);
    return 0;
}