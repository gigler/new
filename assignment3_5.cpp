#include<iostream>
using namespace std;
int main(){
    int i,temp,j;
    int a[5]={12,45,67,64,23};
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;}
            
        }
    }
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}