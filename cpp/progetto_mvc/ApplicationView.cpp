#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>

ApplicationView::ApplicationView(ApplicationModel *m)
    : View(m) {}

void ApplicationView::draw() {
    system("cls");
    std::cout << "\n";
    std::cout << "  ----------------------------------------------------- \n";
    std::cout << " |                PARCHEGGIO AUTOMATICO                |\n";
    std::cout << "  ----------------------------------------------------- \n";
    std::cout << " | OPZIONI:          [0]Esci            [1]Info        |\n";
    std::cout << " |                   [2]Ingresso        [3]Uscita      |\n";
    std::cout << "  ----------------------------------------------------- \n";
}

int ApplicationView::getScelta() {
    int scelta;
    std::cout << " | INSERIRE il comando scelto: ";
    std::cin >> scelta;
    return scelta;
}
