#include <stdio.h>
int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            return gcd(num1 - num2, num2);
        }
        else
        {
            return gcd(num1, num2 - num1);
        }
    }
    return num1;
}
 
int main()
{
    int num1, num2, res;
 
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &num1, &num2);
    res = gcd(num1,num2);
    printf("The GCD of %d and %d is %d.\n", num1,num2, res);
	return 0;
}
