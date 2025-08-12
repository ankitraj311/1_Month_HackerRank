int getExp(long i){
    int ex=0;
    while(i > 1){
        i /= 2;
        ex ++;
    }
    return ex;
}
string counterGame(long n) {
    int rounds = 0;
    while(n > 1){
        int e = getExp(n);
        
        if(n == pow(2, e)) n /= 2;
        else n -= pow(2, e);
        rounds ++;
        
    };
    if(rounds % 2 == 1) return "Louise";
    return "Richard";
}


Dry runs
1) n = 132
Binary: 10000100

Iteration 1

e = getExp(132): 132→66(1)→33(2)→16(3)→8(4)→4(5)→2(6)→1(7) ⇒ e = 7

2^e = 128

n == 128? no → n = 132 - 128 = 4

rounds = 1

Iteration 2

e = getExp(4): 4→2(1)→1(2) ⇒ e = 2

2^e = 4

n == 4? yes → n = 4 / 2 = 2

rounds = 2

Iteration 3

e = getExp(2): 2→1(1) ⇒ e = 1

2^e = 2

n == 2? yes → n = 2 / 2 = 1

rounds = 3

Loop ends (n == 1). rounds = 3 (odd) ⇒ Louise.
