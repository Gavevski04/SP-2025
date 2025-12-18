// This program calculates the sum of even elements, the sum of odd elements,
// and the ratio of the number of even elements to the number of odd elements
// in an array entered by the user from the keyboard.

#include <iostream>
#include <vector>

int main() {
    // Declare variable for the number of elements
    int n;
    // Prompt user for the number of elements
    std::cout << "Enter the number of elements: ";
    // Read the number of elements
    std::cin >> n;
    // Declare a vector to store the array elements
    std::vector<int> arr(n);
    // Prompt user to enter the elements
    std::cout << "Enter the elements: ";
    // Read each element into the vector
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    // Initialize sums and counts
    int sum_even = 0, sum_odd = 0;
    int count_even = 0, count_odd = 0;
    // Loop through each element in the array
    for(int num : arr) {
        // Check if the number is even
        if(num % 2 == 0) {
            // Add to even sum and increment even count
            sum_even += num;
            count_even++;
        } else {
            // Add to odd sum and increment odd count
            sum_odd += num;
            count_odd++;
        }
    }
    // Initialize ratio
    double ratio = 0.0;
    // Calculate ratio if there are odd elements
    if(count_odd != 0) {
        ratio = static_cast<double>(count_even) / count_odd;
    } else {
        // Handle case where there are no odd elements
        std::cout << "No odd elements, ratio undefined." << std::endl;
        return 0;
    }
    // Output the results
    std::cout << "Sum of even elements: " << sum_even << std::endl;
    std::cout << "Sum of odd elements: " << sum_odd << std::endl;
    std::cout << "Ratio of even to odd count: " << ratio << std::endl;
    return 0;
}