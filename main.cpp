// 1. Take two numbers from the user and calculate their difference.
#include <iostream>
using namespace std;

int task1() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Difference: " << a - b << "\n";
    return 0;
}

// 2. Write an algorithm to find the largest of 3 numbers.
#include <iostream>
using namespace std;

int task2() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "Largest number: " << max << "\n";
    return 0;
}


// 3. Calculate the square of a given number.
#include <iostream>
using namespace std;

int task3() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square: " << x * x << "\n";
    return 0;
}


// 4. Calculate the cube of a given number.
#include <iostream>
using namespace std;

int task4() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Cube: " << x * x * x << "\n";
    return 0;
}


// 5. Calculate the sum of numbers from 1 to 10.
#include <iostream>
using namespace std;

int task5() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << "\n";
    return 0;
}


// 6. Calculate the average of two numbers.
#include <iostream>
using namespace std;

int task6() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Average: " << (a + b) / 2 << "\n";
    return 0;
}


// 7. Enter 4 numbers and find the smallest.
#include <iostream>
using namespace std;

int task7() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;

    cout << "Smallest number: " << min << "\n";
    return 0;
}


// 8. Find the sum of the squares of two given numbers.
#include <iostream>
using namespace std;

int task8() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of squares: " << (a*a + b*b) << "\n";
    return 0;
}


// 9. Convert temperature from Celsius to Fahrenheit.
#include <iostream>
using namespace std;

int task9() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    float f = c * 1.8 + 32;
    cout << "Temperature in Fahrenheit: " << f << "\n";
    return 0;
}


// 10. Find the perimeter of a triangle given its three sides.
#include <iostream>
using namespace std;

int task10() {
    float a, b, c;
    cout << "Enter the three sides: ";
    cin >> a >> b >> c;

    cout << "Perimeter: " << (a + b + c) << "\n";
    return 0;
}


// 11. Enter your birth year and calculate your age.
#include <iostream>
using namespace std;

int task11() {
    int birth_year;
    cout << "Enter your birth year: ";
    cin >> birth_year;
    cout << "Your age: " << (2024 - birth_year) << "\n";
    return 0;
}


// 12. Find the area of a rectangle given its sides.
#include <iostream>
using namespace std;

int task12() {
    float a, b;
    cout << "Enter the sides of the rectangle: ";
    cin >> a >> b;
    cout << "Area: " << (a * b) << "\n";
    return 0;
}


// 13. Find the area of a circle given its radius.
#include <iostream>
using namespace std;

int task13() {
    float r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Area: " << (3.14 * r * r) << "\n";
    return 0;
}


// 14. Enter your first name and last name, and display them.
#include <iostream>
#include <string>
using namespace std;

int task14() {
    string name, surname;
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> surname;
    cout << "Hello, " << name << " " << surname << "\n";
    return 0;
}


// 15. Multiply a number by 10.
#include <iostream>
using namespace std;

int task15() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Result: " << x * 10 << "\n";
    return 0;
}


#include <iostream>
#include <string>
#include <cmath>
#include <limits>

// 16. Calculate the average of three numbers.
int task16() {
    double p, q, r;
    std::cout << "Enter three numbers: ";
    std::cin >> p >> q >> r;
    std::cout << "Average: " << (p + q + r) / 3.0 << "\n\n";
    return 0;
}

// 17. Enter four numbers and find their sum
int task17() {
    double a, b, c, d;
    std::cout << "Enter four numbers: ";
    std::cin >> a >> b >> c >> d;
    std::cout << "Sum: " << (a + b + c + d) << "\n\n";
    return 0;
}

// 18. Calculate the circumference of a circle (2 * pi * r)
int task18() {
    double radius;
    const double PI = 3.141592653589793;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Circumference: " << 2.0 * PI * radius << "\n\n";
    return 0;
}

// 19. Enter a number and display its square
int task19() {
    double num;
    std::cout << "Enter a number (to display its square): ";
    std::cin >> num;
    std::cout << "Square: " << (num * num) << "\n\n";
    return 0;
}

// 20. Greet the user with "Welcome!" message
int task20() {
    std::string name;
    std::cout << "Enter your name: ";
    // to ensure any leftover newline is discarded before getline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name);
    std::cout << name << ", Xush kelibsiz!\n\n";
    return 0;
}

int main() {
    // Task 1: Difference of two numbers
    task1();

    // Task 2: Largest of 3 numbers
    task2();

    // Task 3: Square of a number
    task3();

    // Task 4: Cube of a number
    task4();

    // Task 5: Sum from 1 to 10
    task5();

    // Task 6: Average of two numbers
    task6();

    // Task 7: Smallest of 4 numbers
    task7();

    // Task 8: Sum of squares
    task8();

    // Task 9: Celsius to Fahrenheit
    task9();

    // Task 10: Perimeter of a triangle
    task10();

    // Task 11: Calculate age
    task11();

    // Task 12: Area of a rectangle
    task12();

    // Task 13: Area of a circle
    task13();

    // Task 14: Display first and last name
    task14();

    // Task 15: Multiply by 10
    task15();

    // Task 16: Average of three numbers
    task16();

    // Task 17: Sum of four numbers
    task17();

    // Task 18: Circumference of a circle
    task18();

    // Task 19: Square of a number
    task19();

    // Task 20: Welcome greeting
    task20();

    return 0;
}

