/*input 878
output 989

input2 5464
output 6575*
*/


#include<stdio.h>
int number(int n){
    int x=0,r;
    while(n!=0){
       r=n%10;
        x=(x*10)+(r+1);
        n=n/10;
    }
    int temp=x;
    x=0;
    while(temp!=0){
        r=temp%10;
        x=x*10+r;
        temp=temp/10;
    return x;
}
}
int main(){
    int n,ans;
    scanf("%d",&n);
    ans=number(n);
    printf("%d",ans);
}