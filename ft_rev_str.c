void ft_rev_str(char *str)
{
  int a = 0;
  int b = strlen(str) -1;
  char c;
  while (a > b)
  {
    c=str[a];
    str[a]=str[b];
    str[b]=c;
    a++;
    b--;
  }
  
   
}
int main()
{
    char sr[7]= "abcdef\0";
    ft_rev_str(sr);
}
