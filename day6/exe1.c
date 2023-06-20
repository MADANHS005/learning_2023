#include<stdio.h>

struct Box
{
double length;
double height;
double width;
};
typedef struct Box Box;

double calvol(Box *s1){
    return s1->length*s1->height*s1->width;
}

double calsur(Box *s1){
    return 2 * (s1->length*s1->width+s1->length*s1->height+s1->width+s1->height);
}




int main(){
    Box s1;
    Box *ptr=&s1;
    
    ptr->length=10.0;
    ptr->height=12.0;
    ptr->width=5.0;
    double volume=calvol(ptr);
    double surfacearea=calsur(ptr);

    printf("Volume of Box is:%.2f\n",volume);
     printf("Surface area  of Box is:%.2f\n",surfacearea);
    return 0;
}
