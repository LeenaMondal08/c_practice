/*Task
There is a series,s , where the next term is the sum of pervious three terms. Given the first three terms of the series,a ,b  and c respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.
s(n)={ a n=1
       b n=2
       c n=3
       s(n-1)+s(n-2)+s(n-3) otherwise}
Input Format

The first line contains a single integer,n .

The next line contains 3 space-separated integers,a ,b and c .

Constraints
1<=n<=20
1<=a,b,c<=100
Output Format

Print the nth term of the series, .

Sample Input 0

5
1 2 3
Sample Output 0
11*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int term;
    if(n==1){
        term=a;
    }
    else if(n==2){
        term=b;
    }
    else if(n==3){
        term=c;
    }
    else{
        term=find_nth_term(n-1,b,c,a+b+c);
    }
  return term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
