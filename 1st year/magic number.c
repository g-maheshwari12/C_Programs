#include<stdio.h>
int reverse(int n);
int sumofdigit(int n);
 
int main () {
    int n, sum, rev;
 
    printf("Enter a number: ");
    scanf("%d", &n);
 
    sum = sumofdigit(n);
 
    rev = reverse(sum);
 
    if ((sum * rev) == n) {
        printf("%d is a Magic nber\n", n);
    } else {
        printf("%d is not a Magic nber\n", n);
    }
 
    return 0;
  }
   
int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = (r * 10) + (n % 10);
        n = n / 10;
    }
    return r;
  }
   
int sumofdigit(int n){
    int sum = 0;
    while(n != 0)
    {
        sum = sum + n%10;
        n = n/10; 
    }
    return sum;
}

