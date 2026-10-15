#include <vector>

using namespace std;

template <typename T>
int busquedaBinaria(T val, const vector& v, int ini, int fin) {
	if (ini > fin)
		return -1;
	
	int m = (ini + fin)/2;

	if (v[m] == val)
		return m;
	
	if (v[m] > val)
		return busquedaBinaria(val, v, ini, m);
	else
		return busquedaBinaria(val, v, m+1, fin);
}

template <typename T>
void quickSort(vector& v, int ini, int fin) {
	if (ini < fin) {
		int pivot = partition(v, ini, fin);
		quickSort(v, ini, pivot-1);
		quickSort(v, pivot+1, fin);
	}
}

int partition(vector& v, int ini, int fin) {
	int x = v[fin];
	int i = ini;

	for(int j = ini; i < fin-1; i++){
		if (v[i] <= x)
			swap(v[i], v[j]);
	}

	swap(v[i], v[fin]);
	return i;
}
