#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K, i, j, k, ii, jj, kk;
  int mymax, count = 0;
  int A_sum, A_avg, B_sum, B_avg;
  cin >> N >> M >> K;
  vector<int> A(N), B(M);
  for (i = 0; i < N; i++) cin >> A[i];
  for (i = 0; i < M; i++) cin >> B[i];
  i = j = 0;

  while (K > 0) {
    if (i == N && j == M) break;
    A_sum = accumulate(A.begin(), A.end(), 0);
    A_avg = A_sum / A.size();
    B_sum = accumulate(B.begin(), B.end(), 0);
    B_avg = B_sum / B.size();
    if (i == N) {
      K -= B[j++];
    } else if (j == M) {
      K -= A[i++];
    } else if (A_avg <= B_avg) {
      K -= A[i++];
    } else if (A_avg > B_avg) {
      K -= B[i++];
    }
    if (K >= 0) count++;
  }
  // while (K > 0) {
  //   if (i == N && j == M) break;
  //   if (i == N)
  //     K -= B[j++];
  //   else if (j == M)
  //     K -= A[i++];
  //   else if (A[i] == B[j]) {
  //     ii = i;
  //     jj = j;
  //     kk = K;
  //     mymax = max(N, M);
  //     while (mymax > 0) {
  //       if (ii == N)
  //         K -= B[j++];
  //       else if (jj == M)
  //         K -= A[i++];
  //       else if (A[ii] == B[jj]) {
  //         ii++;
  //         jj++;
  //       } else if (A[ii + 1] < B[jj + 1])
  //         K -= A[i++];
  //       else if (A[ii + 1] > B[jj + 1])
  //         K -= B[j++];
  //       if (kk != K) break;
  //       mymax--;
  //     }
  //   } else if (A[i] < B[j])
  //     K -= A[i++];
  //   else if (A[i] > B[j])
  //     K -= B[j++];
  //   if (K >= 0) count++;
  // }
  cout << count << endl;
  return 0;
}