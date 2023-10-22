// (a)
struct complex {
    double real;
    double imaginary;
};

// (b)
struct complex c1, c2, c3;

// (c)
struct complex make_complex (double real, double imaginary) {
    return (struct complex) {real, imaginary};
}

// (d)
struct complex add_complex (struct complex a, struct complex b) {
    return (struct complex) {(a.real + b.real), (a.imaginary + b.imaginary)};
}