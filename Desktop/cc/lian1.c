#include<stdio.h>
int main (){
    int a,b,c,run=0,num;
    scanf("%d/%d/%d",&a,&b,&c);
    if((a%400==0)||(a%4==0&&a%100!=0)){
        run=1;
    }
    for(int i=1;i<b;i++){
        if(i==2){
            if(run==0){
                num+=28;
            }
            else{
                num+=29;
            }
            i++;
            continue;
        }
        switch(i){
            case 1:num+=31;break;
            case 3:num+=31;break;
            case 4:num+=30;break;
            case 5:num+=31;break;
            case 6:num+=30;break;
            case 7:num+=31;break;
            case 8:num+=31;break;
            case 9:num+=30;break;
            case 10:num+=31;break;
            case 11:num+=30;break;
            case 12:num+=31;break;
        }
    }
    num+=c;
    printf("%d",num);
    return 0;
}