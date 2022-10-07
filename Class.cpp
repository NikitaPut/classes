#include <iostream>
#include <cmath>

using namespace std;

class MyClass {// создаю класс
private:
    float x;
    float y;
public:
    int Enter_Points() {// элементы вектора
        cout << " Enter x:";
        cin >> x;
        cout << "\n" << "Enter y: ";
        cin >> y;
        cout << endl;
        return 0;
    }

    float Get_Points() {
        return x, y;
    }

    double Get_LenVector() {
        
        return sqrt(pow(x, 2) + pow(y, 2));
    }
};

int main()
{

    MyClass temp;// объявляю класс для 
    temp.Enter_Points();
    cout << "Points: " << temp.Get_Points();
    cout << "\nVector Size :" << temp.Get_LenVector() << endl;// вывожу модуль вектора

    system("pause");
    return 0;
}
