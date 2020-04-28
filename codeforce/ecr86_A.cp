#include <bits/stdc++.h>
using namespace std;

void solve(){
    int A, B, Q;
    cin >> A >> B >> Q;
    int L = lcm(A, B);
    vector<int> ok(L), S(L+1);
    for(int i=0; i<L; i++){
        if(i%A%B != i%B%A) ok[i] = 1;
        S[i+1] = S[i] + ok[i];
    }

    auto calc = [&](int64_t X){
        return S[L]*(X/L) + S[X%L+1];
    };

    while(Q--){
        int64_t L, R;
        cin >> L >> R;
        int64_t ans = calc(R) - calc(L-1);
        printf("%lld " , ans);
    }
    printf("\n");
}

int main(){
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
