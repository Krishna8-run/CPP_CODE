#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number:";
    cin>>num;
    while(num>0){
        int digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    cout<<"reverse number is "<<sum<<endl;
}