#include <iostream>
#include <vector>
int main(){
    int max1, max2, max3, cur1, cur2, cur3;
    std::cin>>max1>>cur1;
    std::cin>>max2>>cur2;
    std::cin>>max3>>cur3;
    for(int i=0; i<33; i++){
        if(cur1+cur2<=max2){
            cur2+=cur1;
            cur1=0;
        }else{
            cur1-=max2-cur2;
            cur2=max2;
        }
        if(cur2+cur3<=max3){
            cur3+=cur2;
            cur2=0;
        }else{
            cur2-=max3-cur3;
            cur3=max3;
        }
        if(cur3+cur1<=max1){
            cur1+=cur3;
            cur3=0;
        }else{
            cur3-=max1-cur1;
            cur1=max1;
        }
    }
    if(cur1+cur2<=max2){
            cur2+=cur1;
            cur1=0;
    }else{
        cur1-=max2-cur2;
        cur2=max2;
    }
    std::cout<<cur1<<std::endl<<cur2<<std::endl<<cur3;
}