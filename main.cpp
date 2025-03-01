#include <iostream>
#include <vector>

// Функция для вывода пирамиды на основе массива
void print_pyramid(const std::vector<int>& arr)
{
    std::cout << "Исходный массив: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Выводим заголовок для пирамиды
    std::cout << "Пирамида:" << std::endl;

    // Проходим по каждому элементу массива
    for (size_t i = 0; i < arr.size(); ++i)
    {
        // Вычисляем уровень элемента в пирамиде
        int level = 0;
        int index = i;
        while (index > 0)
        {
            index = (index - 1) / 2; // Переходим к родителю
            ++level; 
        }

        // Если это корневой элемент
        if (i == 0)
        {
            std::cout << level << " root " << arr[i] << std::endl;
        }
        else
        {
            // Вычисляем индекс родителя
            int parent_index = (i - 1) / 2;

            // Если это левый ребенок
            if (i % 2 == 1)
            {
                std::cout << level << " left(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
            // Если это правый ребенок
            else
            {
                std::cout << level << " right(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
        }
    }
}


int main()
{
    setlocale(LC_ALL, "rus");

    // Тестовые массивы
    std::vector<int> arr1 = { 1, 3, 6, 5, 9, 8 };
    std::vector<int> arr2 = { 94, 67, 18, 44, 55, 12, 6, 42 };
    std::vector<int> arr3 = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    // Выводим пирамиду для каждого массива
    print_pyramid(arr1);
    std::cout << std::endl;

    print_pyramid(arr2);
    std::cout << std::endl;

    print_pyramid(arr3);
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
