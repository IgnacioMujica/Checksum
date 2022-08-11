int main(void)
{
    /*OBTAIN NUMBER*/
    unsigned long number;
    number = get_long("Number:");
    /*CHECKSUM*/
    int i;
    int oddttl = 0;
    long unsigned tens = 10;
    for (i = 0; i < 8; i++)
    {
        oddttl = oddttl + ((((number / tens) % 10) * 2) / 10);
        oddttl = oddttl + ((((number / tens) % 10) * 2) % 10);
        tens = tens * 100;
    }
    int evens = 0;
    long unsigned ones = 1;
    for (i = 0; i < 8; i++)
    {
        evens = evens + ((number / ones) % 10);
        ones = ones * 100;
    }
    int checksum;
    if ((evens + oddttl) % 10 == 0)
    {
        checksum = 1;
    }
    else
    {
        checksum = 0;
    }
    /*DIGIT COUNT*/
    int length = 0;
    if ((((number / 1000000000000000) % 10) > 0) && ((number / 1000000000000000) <= 9))
    {
        length = 16;
    }
    else if ((((number / 100000000000000) % 10) > 0) && ((number / 100000000000000) <= 9))
    {
        length = 15;
    }
    else if ((((number / 1000000000000) % 10) > 0) && ((number / 1000000000000) <= 9))
    {
        length = 13;
    }
    /*RELEVANT DIGITS*/
    int digit16 = ((number / 1000000000000000) % 10);
    int digit15 = ((number / 100000000000000) % 10);
    int digit14 = ((number / 10000000000000) % 10);
    int digit13 = ((number / 1000000000000) % 10);
    /*CARD SPECIFIC DIGIT CHECK*/
    if (checksum == 1 && length == 15 && digit15 == 3 && (digit14 == 4 || digit14 == 7))
    {
        printf("AMEX\n");
    }
    else if (checksum == 1 && length == 16 && digit16 == 5 && digit15 >= 1 && digit15 <= 5)
    {
        printf("MASTERCARD\n");
    }
    else if (checksum == 1 && (length == 16 || length == 13) && (digit16 == 4 || (length == 13 && digit13 == 4)))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
