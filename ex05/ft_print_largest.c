void ft_print_largest(int n1, int n2, int n3)
{
    char n;

    if(n1>=n2)
    {
        if(n1>=n3)
            n=(char)n1+48;
        else
            n=(char)n3+48;
    }
    else
    {
        if(n2>=n3)
            n=(char)n2+48;
        else
            n=(char)n3+48;
    }
    write(1, &n, 1);
}
