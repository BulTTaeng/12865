#include <iostream>

using namespace std;

int W[102];
int V[102];

int dp[101][100002] = {0, };

int N, K;

int main() {
  cin >> N >> K;

  for(int i =1; i<=N; i++){
    cin >> W[i]; 
    cin >> V[i];
  }

  for(int i =1; i<=N; i++){
    dp[i][0] = 0;
    for(int j = 1; j <=K; j++){
      if(j < W[i]) dp[i][j] =dp[i-1][j];
      else{
        if(dp[i-1][j] > dp[i-1][j-W[i]] + V[i]){
          dp[i][j] = dp[i-1][j];
        }
        else{
          dp[i][j] = dp[i-1][j -W[i]] +V[i];
        }
      }
              
    }
  }

  /*for(int i =1; i<=N; i++){
    for(int j =1; j<=K; j++){
      cout << dp[i][j] << " ";
    }
    cout<<endl;
  }*/

  cout << dp[N][K];


  return 0;
}