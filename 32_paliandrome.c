int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    palindrome(n);
}
int palindrome(int n)
{
    int temp,rem,rev=0;
    temp=n;
    while(n!=0)
    {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
    }
    if(rev==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
