void ft_rev_str(char *str)
{
    int up = 0;
    char lot;
    while (up > 0)
    {
        lot = str[up];
        str[up] = lot;
        up++;
        lot--;

    }
}
int main()
{
    char sr[6]= "abcdef";
    ft_rev_str(sr);
}

