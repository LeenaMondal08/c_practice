/*input str="hello"
output str="jgnnq"

input str ="i am leena"
output str="k co nggpc"

*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==32)
        {
           printf(" "); 
        }
        else{
             printf("%c",(str[i]+2));
        }
}
}