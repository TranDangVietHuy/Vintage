#include <stdio.h>
#include <math.h>
int gcd(int x, int y)
{
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
 
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (1)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}

int find_gcd(int A, int B) 
{
    if (B == 0)
        return A;
    else 
        return find_gcd(B, A % B);   
}

// Tìm bội chung nhỏ nhất của hai số.
int find_lcm(int A, int B) 
{
    return A / find_gcd(A, B) * B;
}

// Tìm ước chung lớn nhất và bội chung nhỏ nhất của cả dãy số.
void gcd_lcm_seq(int N, int a[])
{
    int gcd_all = find_gcd(a[1], a[2]), lcm_all = find_lcm(a[1], a[2]);
    for (int i = 3; i <= N; ++i)
    {
        gcd_all = find_gcd(gcd_all, a[i]);
        lcm_all = find_lcm(lcm_all, a[i]);
    }

}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    int c = gcd(a, b);

    printf("%d", c);
}