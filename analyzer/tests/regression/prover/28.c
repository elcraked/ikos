extern void __ikos_assert(int);
extern int __ikos_unknown();

/*
 * From CAV'12 by Sharma et al.
 */

int main() {
  int x = 0;
  int y = 0;
  int n = 0;
  while (__ikos_unknown()) {
    x++;
    y++;
  }
  while (x != n) {
    x--;
    y--;
  }
  __ikos_assert(y == n);
}
