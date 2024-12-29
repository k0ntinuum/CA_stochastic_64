unt lcs(unt x, unt i) { return (x << (64 - i ) | (x >> i));}
unt rcs(unt x, unt i) { return ( x << i | x >> (64 - i ));}
unt val(unt x, unt i) { return lcs(rcs(M, i) & x , i);}
unt ca(unt r, unt x) {
    unt y = 0, b;
    for (unt i = 0; i < L; i++) { b = val(x, i); y |= ((r & 1ULL << b) >> b) << i;}
    return y;
}
unt ca_n(unt r, unt x, unt n) {
    unt y = x;
    for (unt i = 0; i < n; i++) y = ca(r,y);
    return y;
}
unt ca_set(unt* f, unt x) {
    for (unt i = 0 ; i < E; i++) x = ca(f[i%F], x); 
    return x;
}

