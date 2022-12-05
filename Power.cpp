int power(int x, int n) {
  
    if(x == 0 && n > 0)
        return 0;
    else if(x == 0 || n == 0)
        return 1;
    
    int output = power(x, n - 1);
    return (output * x);

}


