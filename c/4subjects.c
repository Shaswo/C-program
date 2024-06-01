#include<stdio.h>
int main(){
    float maths , science , computer , nepali;
    printf("Maths marks");
    scanf("%f",&maths);
    printf("Science marks");
    scanf("%f",&science);
    printf("Computer marks");
      scanf("%f",&computer);
    printf("Nepali marks");
      scanf("%f",&nepali);
    float P= (maths+science+computer+nepali)*100/160;
    printf("%f",P);
    return 0;
}