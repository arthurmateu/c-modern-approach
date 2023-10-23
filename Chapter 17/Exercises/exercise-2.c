#define NULL '\0'

char *duplicate (const char *s)
{
    char *temp;
    if (!(temp = malloc(strlen(s) + 1)))
        return NULL;
    
    strcpy(temp, s);
    return temp;
}