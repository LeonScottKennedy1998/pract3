#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");
    int strok, stolb;
    cout << "Введите количество строк: ";
    cin >> strok;
    cout << "Введите количество столбцов: ";
    cin >> stolb;
    double sum = 0;
    double counta = 0;
    double** doublearr = new double* [strok];
    double average = 0;
    for (int i = 0; i < strok; ++i)
    {
        doublearr[i] = new double[stolb];
        for (int j = 0; j < stolb; ++j)
        {
            cin >> doublearr[i][j];
            sum += doublearr[i][j];
            counta++;
        }
    }
    average = sum/counta;
    cout << "Среднее значение = " << average;
    system("pause");
    return 0;
}
