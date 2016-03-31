void    ft_putnbr(int nb)
{
    int temp;
    int size;
    char n;

    size = 1;
    if (nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
    }
    temp = nb;
    while ((temp /= 10) > 0)
        size *= 10;
    temp = nb;
    while (size)
    {
        n = (char)((temp / size))+48;
        write(1,&n,1);
        temp %= size;
        size /= 10;
    }
}
