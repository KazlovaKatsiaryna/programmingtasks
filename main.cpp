//В массиве А(N,N) найти суммы элементов, расположенных на
//главной диагонали, ниже диагонали и выше диагонали.

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    const int n = 6;
    const int range = 5;
    int S[3], A[n][n], temp;
    cout << "Matrix:" << endl << endl;
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n ; j++) {
            temp = rand();
            A[i][j] = remainder(temp, 2*range) + range; //Заполнение (i, j)-элемента нормированным случ. числом
            //A[i][j] = rand(); //произвольное случайное число
            cout.width(3);
            cout << A[i][j]; //Вывод (i, j)-элемента матрицы
        }
        cout << endl;
    }
    cout << endl;
    S = {0, 0, 0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            //если элемент лежит выше главной диагонали, то наращиваем сумму
            if (j > i) {
                S[0] += A[i][j];
            }
            //если элемент лежит на диагонали, то наращиваем сумму
            if (j == i) {
                S[1] += A[i][j];
            }
            //если элемент лежит ниже главной диагонали, то наращиваем сумму
            if (j < i) {
                S[2] += A[i][j];
            }
        }
    }
    cout << "Above the diagonal S = " << S[0] << endl;
    cout << "Diagonal S = " << S[1] << endl;
    cout << "Below the diagonal S = " << S[2] << endl;
    system("pause");
    return 0;
}




