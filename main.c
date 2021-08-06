#include <stdio.h>
#include <math.h>
float rootpart(float a,float b,float c);
float root1(float a,float b, float c);
float root2(float a,float b, float c);
int main() {
    float a,b,c,x1,x2;
    do {
        printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    printf("The root1 is:%f\n",root1(a,b,c));
    printf("The root2 is:%f\n",root2(a,b,c));
    printf("the rootpart is:%f\n",rootpart(a,b,c)); 
    }while(1==1);
   
    return 0;
}
float rootpart(float a,float b,float c){
    return sqrt(b*b-(4*a*c));
}

float root1(float a,float b,float c){
    return ((-b+rootpart(a,b,c))/2*a);
}
float root2(float a,float b, float c){
    return ((-b-rootpart(a,b,c))/2*a);
}












