// Resolução do problema "Merge Sort"
// no site: https://codeforces.com/problemset/problem/873/D

#include <bits/stdc++.h>
#define MAX 100000
#define IS_ODD(x) x % 2

using namespace std;
int n, k;
vector<int> v(MAX);

void unsort(int l, int r)
{
  if (k <= 0 || l + 1 == r)
    return;
  k -= 2;
  int mid = (l + r) / 2;
  swap(v[mid - 1], v[mid]);
  unsort(l, mid);
  unsort(mid, r);
}

int main()
{
  scanf("%d %d", &n, &k);
  if (!IS_ODD(k))
    printf("%d\n", -1);
  else
  {
    for (int i = 0; i < n; i++)
    {
      v[i] = i + 1;
    }
    k--;
    unsort(0, n);
    if (k)
    {
      printf("%d\n", -1);
    }
    else
    {
      int j;
      for (j = 0; j < n - 1; j++)
      {
        printf("%d ", v[j]);
      }
      printf("%d\n", v[j]);
    }
  }
  return 0;
}