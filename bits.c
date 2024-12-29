
void shuffle(unt* f, unt l) {
    unt j = 0;unt t = 0;
    for (unt i = l - 1; i > 0; i -= 1) {
        j = arc4random_uniform(i+1);
        t = f[i];f[i] = f[j];f[j] = t;
    }
}
void perm(unt* t, int L) {
    for (unt i = 0; i < L ; i++) t[i] = i;
    shuffle(t, L);
}

unt permute_bits(unt x, unt* p) {
    unt y = 0;
    for (unt i = 0; i < 64; i++) y |= ((x & (1ULL << i)) >> i) << p[i];
    return y;
}
unt bit_count(unt x) {
    unt y = 0;
    for (unt i = 0; i < L; i++) y += ((x & (1ULL << i)) >> i);
    return y;
}
unt balanced_f() {
    unt y = (1ULL << 33) - 1ULL;
    unt p[64];
    perm(p,64);
    y = permute_bits(y,p);
    return y;
}
void init_f_set(unt* f_set) {
    for (unt i = 0 ; i < F; i++) f_set[i] = balanced_f();
}
unt ith_bit(unt i, unt x) {
    return (x & ( 1ULL << i))  >> i;
}
unt first_P_bits(unt x) {
    return ((1ULL << P) - 1) & x;
}

unt spaced_bits(unt x) {
    unt y = 0;
    for (unt i = 0; i < P ; i++) {
        y |= ith_bit(S*i, x) << i;
    }
    return y;
}