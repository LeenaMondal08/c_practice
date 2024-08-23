/*Given a string,s, consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,num  which is the given number.

Constraints
1<=len(num<=1000)
All the elements of num are made of english alphabets and digits.
Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9 .

Sample Input 0
a11472o5t6
Sample Output 0
0 2 1 0 1 1 1 1 0 0
 */
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    scanf("%s",&s);
    int n[]={'0','1','2','3','4','5','6','7','8','9'};
    int j=0;
    while(j<=9){
        int count=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]==n[j]){
                count++;
            }
        }
        printf("%d ",count);
        j++;
    }
    return 0;
}
