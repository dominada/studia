#include <iostream>
#include <iomanip>

using namespace std;

int main( )
{
  int **A, **B, **C, N, M, K, i, j, kp, s;
  cin >> N >> M >> K;
  A = new int * [ N ];
  B = new int * [ M ];
  C = new int * [ N ];
  for( i = 0; i < N; i++ )
  {
    A [ i ] = new int [ M ];
    C [ i ] = new int [ K ];
  }

  for( i = 0; i < M; i++ ) B [ i ] = new int [ K ];
  for( i = 0; i < N; i++ )
    for( j = 0; j < M; j ++ ) cin >> A [ i ][ j ];
  for( i = 0; i < M; i++ )
    for( j = 0; j < K; j++ ) cin >> B [ i ][ j ];

  cout << endl;

  for( i = 0; i < N; i++ )
    for( j = 0; j < K; j++ )
    {
      s = 0;
      for( kp = 0; kp < M; kp++ ) s += A [ i ][ kp ] * B [ kp ][ j ];
      C [ i ][ j ] = s;
    }

  cout <<  "C = A x B:\n";

  for( i = 0; i < N; i++ )
  {
    for( j = 0; j < K; j++ ) cout << setw ( 6 ) << C [ i ][ j ];
    cout << endl;
  }

  for( i = 0; i < N; i++ )
  {
    delete [ ] A [ i ];
    delete [ ] C [ i ];
  }

  return 0;
} 




