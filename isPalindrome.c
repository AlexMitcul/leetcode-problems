bool isPalindrome(int x) {
    int dx;
    int len;
    int n;
    int new_x;
    
    if (x < 0)
       return (0);
    if (x < 10)
        return (1);
    dx = x;
    len = 0;
    while (dx > 0)
    {
        dx /= 10;
        len++;
    }
    n = len / 2;
    new_x = 0;
    while (n--)
    {
        new_x = new_x * 10 + x % 10;
        x /= 10;
    }
    if (len % 2 != 0)
        x /= 10;
    if (new_x == x)
        return (1);
    return (0);
}
