#include <iostream>
#include "registry.h"

int main()
{
    std::cout << "+- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- +\n"
              << "| 33.5 Practical Work.Task 3. Data registry on templates |\n"
              << "+- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- +\n\n";

    std::cout << "=== STRING test ===\n";
    Registry<std::string, int> reg;

    std::cout << "----------\n- Step 1 -\n";
    reg.add("Petya", 28);
    reg.add("Petya", 28);
    reg.print();

    std::cout << "----------\n- Step 2 -\n";
    Data<std::string, int> d1("Stas", 28);
    reg.add(d1);
    reg.print();

    std::cout << "----------\n- Step 3 -\n";
    reg.remove("Petya");
    reg.print();

    std::cout << "----------\n- Step 4 -\n";
    reg.remove("Stas");
    reg.print();

    std::cout << "----------\n- Step 5 -\n";
    reg.remove("Stas");
    reg.print();

    std::cout << "----------\n- Step 6 -\n";
    reg.add("Stas", 28);
    reg.add("Petya", 28);
    reg.add("Fedot", 17);
    reg.print();
    auto findResult = reg.find("Fedot");
    std::cout << findResult->key << " is found.\n";

    std::cout << "=== INT - DOUBLE test ===\n";
    Registry<int, double> reg2;

    std::cout << "----------\n- Step 1 -\n";
    reg2.add(1, 26.7);
    reg2.add(2, 28.3);
    reg2.print();

    std::cout << "----------\n- Step 2 -\n";
    Data<int, double> d2(1, 34.8);
    reg2.add(d2);
    reg2.print();

    std::cout << "----------\n- Step 3 -\n";
    reg2.remove(1);
    reg2.print();

    std::cout << "----------\n- Step 4 -\n";
    reg2.remove(2);
    reg2.print();

    std::cout << "----------\n- Step 5 -\n";
    reg2.remove(2);
    reg2.print();

    std::cout << "----------\n- Step 6 -\n";
    reg2.add(1, 34.1);
    reg2.add(2, 34.7);
    reg2.add(3, 7.4);
    reg2.print();
    auto findResult2 = reg2.find(3);
    std::cout << findResult2->key << " is found.\n";
    std::cout << "\n\t+-----+\n"
                << "\t| End |\n"
                << "\t+-----+\n";

    return 0;
}