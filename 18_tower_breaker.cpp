int towerBreakers(int n, int m) {
    if (m == 1 || n % 2 == 0) {
        return 2;
    }
    return 1;
}

| Condition    | Who wins? | Why?                                          |
| ------------ | --------- | --------------------------------------------- |
| `m == 1`     | Player 2  | No one can move; P1 loses first               |
| `n % 2 == 0` | Player 2  | Can mirror P1’s moves and make the last move  |
| `n % 2 != 0` | Player 1  | Always one unmatched tower to control outcome |
