#include <iostream>

using namespace std;

bool es_palindromo(int n) {
    
    string str =to_string(n);
    int i=0, j=str.length()-1;
    
    while (i<j) {
        if (str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int max_palindromo=0;
    int max_i, max_j;
    
    for (int i=100; i<=999; i++) {
        for (int j=100; j<=999; j++) {
            int producto= i*j;
            if (es_palindromo(producto) && producto>max_palindromo) {
                max_palindromo=producto;
                max_i=i;
                max_j=j;
            }
        }
    }
    cout << max_i << " * " << max_j << " = " << max_palindromo << endl;
    return 0;
}
