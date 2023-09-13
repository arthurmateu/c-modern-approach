/*
    (a) "%d" will only look for a digit, while " %d" will look for a blank space followed by a digit
    (b) "%d-%d-%d" will look for digits followed by hyphens, while "%d -%d -%d" will look for digits followed by a space followed by hyphens, with another digit near it.
    (c) The program will hang due to scanf automatically ignoring white spaces
    (d) "%f,%f" will look for two floating numbers with a comma in the middle, while "%f, %f" will look for a floating number followed by a comma, followed by a white space and another floating number.
*/