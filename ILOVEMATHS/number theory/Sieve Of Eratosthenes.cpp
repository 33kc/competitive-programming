vector<int> sieve_of_eratosthenes(int limit) 
{
    vector<bool> primes(limit + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= limit; ++i) 
    {
        if (primes[i]) 
        {
            for (int j = i * i; j <= limit; j += i) 
            {
                primes[j] = false;
            }
        }
    }
    
    vector<int> prime_numbers;
    for (int i = 2; i <= limit; ++i) 
    {
        if (primes[i]) prime_numbers.push_back(i);
    }
    return prime_numbers;
}
