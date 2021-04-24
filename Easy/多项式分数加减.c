#include<stdio.h>
int main(){
    int n=0,st=1;
    float sum=0.0;
    for(int i=1;i<=100;i++){
        if(st==1){
            sum=sum+1.0/i;
            st=-st;
        }
        else{
            sum=sum-1.0/i;
            st=-st;
        }
    }
    printf("%.6f",sum);
    return 0;
}


//    Tech:
//#include<stdio.h>
//    int main(){
//    int i=0;
//    double sum=0.0;
//    int flag=1;
//    for(i=1;i<=100;i++){
//        sum+=flag*1.0/i;
//        flag=-flag;
//    }
//    printf("%lf\n",sum);
//    return 0;
//}