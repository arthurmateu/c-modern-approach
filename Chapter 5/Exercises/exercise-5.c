/*
    No, because the if statement would be divided as such:
        (n >= 1) <= 10
    Regardless of the result of the first part (1 or 0), it will end up giving true
    for the second statement (since 10 is greater than 0 and/or 1)

    When n is equal to 0, the first statement (n >= 1) will return false, and the statement
    will end up as follows:
        0 <= 10
    Which will end up as true (and incorrectly print that n is between 1 and 10)
*/