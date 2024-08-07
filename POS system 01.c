// C program to initialize the Food
// Ordering System
// Initialization
#include <stdio.h>

// Structure to store the user details
// i.e., Signup details
struct details {
	char uname[100];
	int age;
	char password[100];
	char email[100];
	char mobile[10];
};

// Structure to store the hotels
// and their food details
struct hotels {
	char hotel[100];
	char first_food[20];
	char second_food[20];
	char third_food[20];
	char fourth_food[25];
	int first, second, third, fourth;
};

// Initialize the hotels and details
struct hotels m[5];
struct details s[100];

// Function to get the input for
// a new account
void signup();

// Function to check whether account
// is already existed or not
void account_check();

// Function to validate all input fields
int validate();
void login();
void cart();
void search_by_hotels();
void search_by_food();
void food_order(int food);

// Function to initialize the hotels and
// food structure dynamically
void hotel_initialize();
void hotels(int hotel_choice);

int flag = 1, i, j = 0, count = 0, caps = 0;
int small = 0, special = 0, numbers = 0;
int success = 0, x, choice;
char temp_name[100], temp_password1[100];
char temp_password2[100], temp_email[100];
char temp_mobile[100];

int temp_age, total = 0, food_choice, n;
int hotel_choice, search_choice, confirm;
int ch, food, hotel_id;
