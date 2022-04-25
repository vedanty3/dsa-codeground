#include <iostream>
using namespace std;

int main()
{
  int array[100][100];
  int m, n;
  cout << "Enter the number of rows : "; /// Row major /// array[R][C] /// array[i][j] /// array=i*C+j
  cin >> m;
  cout << "Enter the number of columns : "; /// Column major /// array[R][C] /// array[i][j] /// array = j*R+i
  cin >> n;

  /// Input...

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "Enter element at " << i << j << " index :";
      cin >> array[i][j];
    }
  }

  /// Row wise output...

  cout << endl
       << "Your row wise matrix is : " << endl
       << endl;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  /// Column wise output...

  cout << endl
       << "Your column wise matrix is : " << endl
       << endl;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << array[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}
