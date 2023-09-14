/*
    Yes, since in both the result would give a negative value.
    Take for example, i=1 and j=2
    (-2)/2 --> -1
    -(2/2) --> -1
    Please note that this is in C99, where rounding occurs to the number closest to 0. In C89 the value of (-i)/j could give two different responses.
*/