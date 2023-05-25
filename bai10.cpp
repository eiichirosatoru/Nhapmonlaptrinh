#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 5
#define M 10

int main()
{
    int *px = NULL, x, i;
    px = (int*)malloc(N * sizeof(int));
    if(px != NULL)
    {
        printf("Cap nhat bo nho cho con tro px thanh cong\n");
        printf("Nhap vao 5 so nguyen to cho px");
        for(i = 0; i < 5; i++)
        {
            scanf("%d",&x);
            *(px+i) = x;
        }
        printf("Gia tri cua con tro px =");
        for(i = 0; i < 5; i++)
        printf("%d ", *(px+i));
        
        px = (int*)realloc(px,M*sizeof(int));
        
        printf("\n Nhap lai %d so nguyen: ", M);
        for(i = 0; i <M; i++)
            scanf("%d",&px[i]);
            
        printf("Day so vua nhap lai la: ");
        for(i = 0; i < M; i++)
            printf("%d", *(px+i));
        if(px)
            free(px);
        printf("\nDa giai phong con tro px va ket thuc");
        return 1;
    }
    else
    {
        printf("Loi cap phat bo nho cho con tro px");
        return 0;
    }
}