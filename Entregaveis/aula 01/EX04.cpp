#include <iostream>
using namespace std;
// Se eu nao colocar a funcao no começo eu preciso colocar a mencao dela no inicio, prometendo que em seguida vai ter funcao
int multiplicar (int x, int y);

int main() {
	int x = 5, y = 3;
	cout << multiplicar (x, y) << endl;
	return 0;
}

int multiplicar (int x, int y) {
	return x * y;
}
