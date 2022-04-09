#include <iostream>
using namespace std;

int rest = 0;

int res(int coin_money, int n){
    if(coin_money >= n){
        rest = coin_money % n;
        return coin_money / n;
    }else{
        rest = coin_money;
        return 0;
    }
}



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int coin = 0;
    coin += res(N, 500);
    coin += res(rest, 100);
    coin += res(rest, 50);
    coin += res(rest, 10);
    cout << coin;
}

// / 몫, % 나머지

// for문 사용
coins = [500, 100, 50, 10]
for coin in coins{
    cnt += N / coin 
    n % coin

}