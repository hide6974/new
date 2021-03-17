#include <bits/stdc++.h>
using namespace std;

// 動的計画法を使わないで計算する場合 fib
int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

// Dynamic Programming memo fib_dp
int memo[100000];
int fib_dp(int n)
{
    if (n <= 2){
        return 1;
    }  else{
        if (memo[n] != 0)
        { //　計算した経験があれば再利用
            return memo[n];
        }else{
            memo[n] = fib_dp(n - 1) + fib_dp(n - 2); //計算結果をmemoに保存
        }
        return memo[n];
    }
}

int main(void)
{
//    cout << fib(2000) << endl;
    cout << fib_dp(2000) << endl;
}