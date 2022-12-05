int print(int n){
    
    if(n == 0){
        return 1;
    }
    
    cout << print(n - 1) << ' ';
    return (n + 1);
    
}
