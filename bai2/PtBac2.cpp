#include<stdio.h>
#include<math.h>
#include"PtBac2.h"

void PtBac2::nhapPT(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
    this->delta = b*b - 4*a*c;
}
void PtBac2::giaiPT()
{
    if(a == 0) {
        if(b != 0 && c != 0){
            x1 = x2 = -c/b;
            printf("Pt co nghiem la: %.2f\r\n", x1);
        }
        else if(b == 0 && c != 0){
            printf("Pt vo nghiem\r\n");
        }
        else{
            printf("Pt vo so nghiem\r\n");
        }
    }
    else{
        if(a + b + c == 0){
            x1 = 1;
            x2 = c / a;
            printf("Pt co 2 nghiem: %.2f va %.2f\r\n", x1, x2);
        }
        else if(a - b + c == 0){
            x1 = -1;
            x2 = -c / a;
            printf("Pt co 2 nghiem: %.2f va %.2f\r\n", x1, x2);
        }
        else{
            if(delta > 0){
                x1 = (-b - sqrt(delta))/(2*a);
                x2 = (-b + sqrt(delta))/(2*a);
                printf("Pt co 2 nghiem la: %.2f va %.2f\r\n", x1, x2);
            }
            else if(delta == 0){
                x1 = x2 = -b/(2*a);
                printf("Pt co nghiem la: %.2f\r\n", x1);
            }
            else{
                printf("Pt vo nghiem\r\n");
            }
        }
    }
}