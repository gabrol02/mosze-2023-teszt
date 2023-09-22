#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // átnevezés NELEMENTS-rõl N_ELEMENTS re
    std::cout << '1-100 ertekek duplazasa'; // ";" pótlása
    for (int i = 0;i<N_ELEMENTS;i++) // for ciklus helyes paraméterezése
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)  // for ciklus helyes paraméterezése
    {
        std::cout << "Ertek:"
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Fel kell szabadítani a dinamikus memóriát

    return 0;
}
