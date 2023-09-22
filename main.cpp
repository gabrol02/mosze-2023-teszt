#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // �tnevez�s NELEMENTS-r�l N_ELEMENTS re
    std::cout << '1-100 ertekek duplazasa'; // ";" p�tl�sa
    for (int i = 0;i<N_ELEMENTS;i++) // for ciklus helyes param�terez�se
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)  // for ciklus helyes param�terez�se
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

    delete[] b; // Fel kell szabad�tani a dinamikus mem�ri�t

    return 0;
}
