long long int  bigmod ( long long n, int p, int m )
{
    if ( p == 0 )return 1;

    if ( p % 2 ){
        return ( ( n % m ) * ( bigmod ( n, p - 1, m ) ) ) % m;
    }
    else
    {
        long long c = bigmod ( n, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
