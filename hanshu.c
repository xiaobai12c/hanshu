#include <stdio.h>
#include <math.h>


//调用函数，使num+1；

void add(int* x){
    *x+=1 ;
    //(*x)++;
}

int main(){
    int num =0;
    add(&num);
    printf("%d\n", num);
    add(&num);
    printf("%d\n", num);
    add(&num);
    printf("%d\n", num);
    add(&num);
    printf("%d\n", num);
    return 0;
}


// int panduan(int x){
//     if((x%4 == 0 && x%100 != 0) || x%400 == 0){
//         return 1;
//     }
//     else
//         return 0;
// }
// int main(){
//     int n= 0;
//     scanf("%d", &n);
//     if(panduan(n))
//          printf("闰年\n");
//     else
//         printf("平年\n");
//     return 0;
// }




// int panduan(int x){
//     int j= 0;
//     for(j=2; j<= sqrt(x); j++){
//         if(x%j == 0){
//             return 0;
//         }
           
//     }
//     return 1;
// }


// int main(){
//     int i= 0;
//     printf("请输入>:\n");
//     scanf("%d", &i);
//     panduan(i);

//     if(panduan(i) == 1){
//         printf("%d\n", i);
//     }
//     else{
//         printf("不是素数\n");
//     }

//     return 0;
// }






// void jh(int* x, int* y){
//     int tmp= 0;
//     tmp= *x;
//     *x= *y;
//     *y= tmp;

// }

// int main(){

//     int a= 5;
//     int b= 10;

//     printf("%d %d\n",a ,b);
//     jh(&a, &b);
//     printf("%d %d\n",a ,b);
//     return 0;
// }