#include <iostream>
#include <vector>

// ������� ��� ������ �������� �� ������ �������
void print_pyramid(const std::vector<int>& arr)
{
    std::cout << "�������� ������: ";
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // ������� ��������� ��� ��������
    std::cout << "��������:" << std::endl;

    // �������� �� ������� �������� �������
    for (size_t i = 0; i < arr.size(); ++i)
    {
        // ��������� ������� �������� � ��������
        int level = 0;
        int index = i;
        while (index > 0)
        {
            index = (index - 1) / 2; // ��������� � ��������
            ++level; 
        }

        // ���� ��� �������� �������
        if (i == 0)
        {
            std::cout << level << " root " << arr[i] << std::endl;
        }
        else
        {
            // ��������� ������ ��������
            int parent_index = (i - 1) / 2;

            // ���� ��� ����� �������
            if (i % 2 == 1)
            {
                std::cout << level << " left(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
            // ���� ��� ������ �������
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

    // �������� �������
    std::vector<int> arr1 = { 1, 3, 6, 5, 9, 8 };
    std::vector<int> arr2 = { 94, 67, 18, 44, 55, 12, 6, 42 };
    std::vector<int> arr3 = { 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };

    // ������� �������� ��� ������� �������
    print_pyramid(arr1);
    std::cout << std::endl;

    print_pyramid(arr2);
    std::cout << std::endl;

    print_pyramid(arr3);
    std::cout << std::endl;

    return EXIT_SUCCESS;
}