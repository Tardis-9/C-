#include<stdio.h>
int is_leap_year(year){
    if((year%100!=0 && year%4==0)||year%400==0){
        return 1;
    }
    return 0;

};

int main(){
    int year=0;
    for(year=1000;year<=2025;year++){
        if(1==is_leap_year(year)){
            printf("%d\n",year);
        }
    }
    return 0;
}
