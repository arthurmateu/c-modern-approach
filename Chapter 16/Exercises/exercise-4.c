// (a)
typedef struct {
    double real;
    double imaginary;
} Complex;

// (b)
Complex c1, c2, c3;

// (c)
Complex make_complex (double real, double imaginary) {
    return (Complex) {real, imaginary};
}

// (d)
Complex add_complex (Complex a, Complex b) {
    return (Complex) {(a.real + b.real), (a.imaginary + b.imaginary)};
}