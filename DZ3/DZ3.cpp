#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "\t ЗАДАНИЕ 1\n";
    
    int hour, min, sec;

    cout << "Введите количество секунд: ";
    cin >> sec;
    
    min = sec / 60, sec = sec % 60,  hour = min / 60,  min = min / 60;

    cout << hour << " час(а,ов)\n";
    cout << min << " минут(a,ы)\n";
    cout << sec << " секунд(a,ы)\n\n";


    cout << "\t ЗАДАНИЕ 2\n";

    double number;
    int cent, dollars;

    cout << "Введите число: ";
    cin >> number;
    dollars = number;
    cent = (number - dollars) * 100;
    cout << dollars << " доллар(ов)\n";
    cout << cent << " цент(ов)\n\n";


    cout << "\t ЗАДАНИЕ 3\n";

    int deys, week;

    cout << "Введите кодичество дней: ";
    cin >> deys;
    week = deys / 7;
    deys = deys % 7;
    cout << week << " недель(я)\n";
    cout << deys << " дней / день\n\n";


    cout << "\t ЗАДАНИЕ 4\n";

    int time;
    float distance, speed;

    cout << "Введите расстояние в км: ";
    cin >> distance;
    cout << "Введите время в мин: ";
    cin >> time;
    speed = distance / time;
    cout << "Требуемая скорость " << speed << " км/ч\n\n";


    cout << "\t ЗАДАНИЕ 5\n";

    int h1, m1, s1, h2, m2, s2, price = 2;
    float t1, t2, t, summa;

    cout << "Введите время начала поездки\n";
    cout << "Часы: ", cin >> h1, cout << " часов\n";
    cout << "Минуты: ", cin >> m1, cout << " минут\n";
    cout << "Секунды: ", cin >> s1, cout << " секунд\n";
   
    cout << "Введите время окончания поездки\n";
    cout << "Часы: ", cin >> h2, cout << " часов\n";
    cout << "Минуты: ", cin >> m2, cout << " минут\n";
    cout << "Секунды: ", cin >> s2, cout << " секунд\n";
    
    t1 = h1 * 60 + m1 + s1 / 60;
    t2 = h2 * 60 + m2 + s2 / 60;
    t = t2 - t1;
    summa = price * t;
    cout << "стоимость поездки: " << summa << " руб.\n\n";


    cout << "\t ЗАДАНИЕ 6\n";

    float s, price1, price2, price3, expenditure, summa1, summa2, summa3;

    cout << "Введите расстояние в км: ";
    cin >> s;
    cout << "Введите стоимость первой марки бензина: ";
    cin >> price1;
    cout << "Введите стоимость второй марки бензина: ";
    cin >> price2;
    cout << "Введите стоимость третьей марки бензина: ";
    cin >> price3;
    cout << "Введите расход бензина вашего автомобиля на 100 км: ";
    cin >> expenditure;

    summa1 = s * price1 * expenditure / 100;
    summa2 = s * price2 * expenditure / 100;
    summa3 = s * price3 * expenditure / 100;

    cout << "Сумма первой марки бензина: " << summa1 << " руб.\n";
    cout << "Сумма первой марки бензина: " << summa2 << " руб.\n";
    cout << "Сумма первой марки бензина: " << summa3 << " руб.\n\n";

}
