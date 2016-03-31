void    ft_print_comb(void)
{
    int numbers[3] = {48, 48, 48};

    while (numbers[0] <= 57)
    {
        if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
        {
            write(1,&numbers[0],1);
            write(1,&numbers[1],1);
            write(1,&numbers[2],1);
            if (numbers[0] != 55)
                write(1,",",1);
            if (numbers[0] != 55)
                write(1," ",1);
        }
        if (numbers[2]++ >= 57)
        {
            numbers[2] = 48;
            numbers[1]++;
        }
        if (numbers[1] == 58)
        {
            numbers[1] = 48;
            numbers[0]++;
        }
    }
}
