#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

// bubble sort:
void bubbleSort(std::vector<int> &a) {
    int temp = 0;
    while (true) {
        bool swapp = false;
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapp = true;
            }
        }
        if (swapp) {
            break;
        }
    }
}

// merge sort:
void mergeSort(std::vector<int> &left, std::vector<int> &right, std::vector<int> &nums) {
    int nL = left.size();
    int nR = right.size();
    int i = 0;
    int j = 0;
    int k = 0;

    while (j < nL && k < nR) {
        if (left[j] < right[k]) {
            nums[i] = left[j];
            j++;
        } else {
            nums[i] = right[k];
            k++;
        }
        i++;
    }

    while (j < nL) {
        nums[i] = left[j];
        j++;
        i++;
    }

    while (k < nR) {
        nums[i] = left[j];
        k++;
        i++;
    }
}

// sort funkcija (za merge):
void sort(std::vector<int> &nums) {
    if (nums.size() < 2) {
        return;
    }

    int mid = nums.size() / 2;
    std::vector<int> left;
    std::vector<int> right;

    for (int i = 0; i < mid; i++) {
        left.push_back(nums[i]);
    }

    for (int i = 0; i < (nums.size()) - mid; i++) {
        right.push_back(nums[mid + i]);
    }

    sort(left);
    sort(right);
    mergeSort(left, right, nums);
}

// driver:
int main() {
    std::vector<int> vect1(100); // 100 umjesto 1 000 000!
    std::vector<int> vect2;
    std::vector<int> vect3;

    // dodaj random brojeve u vector:
    std::random_device rnd;
    std::mt19937 mersenne_engine {rnd()}; // generira rand brojeve
    std::uniform_int_distribution<int> distr {1, 1000000};

    auto gen = [&distr, &mersenne_engine]() {
        return distr(mersenne_engine);
    };

    generate(std::begin(vect1), std::end(vect1), gen);

    // copy vect1 u vect2:
    for (int i = 0; i < vect1.size(); i++) {
        vect2.push_back(vect1[i]);
    }

    // copy vect1 u vect3:
    for (int i = 0; i < vect1.size(); i++) {
        vect3.push_back(vect1[i]);
    }

    // === S O R T ===
    // sort vect1 preko bubble sorta:
    auto start1 = std::chrono::high_resolution_clock::now();
    bubbleSort(vect1);
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto duration1 = std::chrono::duration_cast<std::chrono::microseconds> (stop1 - start1);

    // sort vect2 preko merge sorta:
    auto start2 = std::chrono::high_resolution_clock::now();
    sort(vect2);
    auto stop2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds> (stop2 - start2);

    // sort vect3 preko upgraded sort:
    auto start3 = std::chrono::high_resolution_clock::now();
    std::sort(vect3.begin(), vect3.end());
    auto stop3 = std::chrono::high_resolution_clock::now();
    auto duration3 = std::chrono::duration_cast<std::chrono::microseconds> (stop3 - start3);

    // POKAZIVANJE REZULTATA:
    std::cout << "Bubble sort: " << duration1.count() << " ms" << std::endl;
    std::cout << "Merge sort: " << duration2.count() << " ms" << std::endl;
    std::cout << "Upgraded sort: " << duration3.count() << " ms" << std::endl;

    return 0;
}
