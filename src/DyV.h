#include <vector>

using namespace std;

template <typename T>
int busquedaBinaria(T val, const vector<T>& v, int ini, int fin) {
	if (ini > fin)
		return -1;
	
	int m = (ini + fin)/2;

	if (v[m] == val)
		return m;
	
	if (v[m] > val)
		return busquedaBinaria(val, v, ini, m-1);
	else
		return busquedaBinaria(val, v, m+1, fin);
}

template <typename T>
int partition(vector<T>& v, int ini, int fin) {
        T x = v[fin];
        int i = ini;

        for(int j = ini; j < fin-1; j++){
                if (v[j] <= x)
                        swap(v[i], v[j]);
			i++;
        }

        swap(v[i], v[fin]);
        return i;
}

template <typename T>
void quicksort(vector<T>& v, int ini, int fin) {
	if (ini < fin) {
		int pivot = partition(v, ini, fin);
		quicksort(v, ini, pivot-1);
		quicksort(v, pivot+1, fin);
	}
}

