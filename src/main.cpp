/*
 * Author: Shomurod Anvarov
 * Date: 14.11.2023
 * Name: Shomurod Anvarov
 */
//1
#include <iostream>
#include "task_1.h"
#include <vector>
#include <string>

void bubbleSort(std::vector<std::string>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
              
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    std::vector<std::string> books = {"Catcher in the Rye", "Pride and Prejudice",
                                      "To Kill a Mockingbird", "The Great Gatsby",
                                      "Moby Dick"};

    bubbleSort(books);
    
    std::cout << "Sorted List of Books:" << std::endl;
    for (std::string book : books) {
        std::cout << book << std::endl;
    }

    return 0;
}
//2
#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }
}

int main() {
    std::vector<int> denominations = {8, 3, 12, 6, 1};

    selectionSort(denominations);

    std::cout << "Sorted List of Denominations:" << std::endl;
    for (int denomination : denominations) {
        std::cout << denomination << std::endl;
    }

    return 0;
}
//3
#include <iostream>
#include <vector>

using namespace std;

void swap_soldiers(vector<string>& soldiers) {
    int n = soldiers.size();
    if (n % 2 == 1) {
        return;
    }
    for (int i = 0; i < n; i += 2) {
        swap(soldiers[i], soldiers[i+1]);
    }
}

int main() {
    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};
    swap_soldiers(soldiers);
    for (string soldier : soldiers) {
        cout << soldier << endl;
    }
    return 0;
}
//4
#include <iostream>
#include <vector>

using namespace std;

int countElements(vector<int>& arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 4, 6};
    cout << countElements(arr) << endl;
    return 0;
}
