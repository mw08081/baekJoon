
// using ios::sync_with_stdio(False), cin.tie(NULL)
/*

#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
    ios::sync_with_stdio(false);

	int T = 0, a, b;

	cin >> T;
	for (int i = 0; i < T; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

	return 0;
}

*/

#include <cstdio>
int main()
{
    int n, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}