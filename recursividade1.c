#include <stdio.h>

int mdc( int m, int n )
{
    int r;
    if (r !=0){
        return m;
    }else{
        r = m % n;
        m = n;
        n = r;
    return mdc(m,n);
        
    }
}

int main()
{
    printf("%d",mdc(9,18));

    return 0;
}
